#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<ll>;
using vvi = vector<vi>;
using pii = pair<ll,ll>;
using vp = vector<pii>;

const ll mod = 1e9+7;

void solve();
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}

vvi mask2mat[1<<20];

void solve() {
    ll R,C,N,I;
    cin>>R>>C>>N>>I;
    I--;

    vi a(C);
    vi cols;
    for (int i=0; i<N; i++) {
        ll x,y;
        cin >> x >> y;
        x--; y--;
        a[y] |= (1<<x);
        cols.push_back(y);
    }
    vi masks = {0};
    for (auto c : cols) masks.push_back(a[c]);
    {
        set<ll> s(masks.begin(), masks.end());
        masks = vi(s.begin(), s.end());
    }

    for (auto mask : masks) {
        vvi mat(R, vi(R));
        for (int i=0; i<R; i++) {
            if (mask>>i&1) continue;

            ll lo = i, hi = i;
            for (int j=i; j>=0; j--) {
                if (mask>>j&1) break;
                lo = j;
            }
            for (int j=i; j<R; j++) {
                if (mask>>j&1) break;
                hi = j;
            }
            for (int j=lo; j<=hi; j++) {
                auto [mn,mx] = minmax(i,j);
                mat[i][j] = (mn-lo+1) * (hi-mx+1);
            }
        }
        mask2mat[mask] = mat;
    }

    auto mat_mul = [&] (vvi &a, vvi &b) {
        int n = a.size();
        vvi ret(n, vi(n));
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                for (int k=0; k<n; k++) {
                    ret[i][j] += a[i][k] * b[k][j];
                    ret[i][j] %= mod;
                }
            }
        }
        return ret;
    };

    auto mat_exp = [&] (vvi a, ll e) {
        int n = a.size();
        vvi ret(n, vi(n));
        for (int i=0; i<n; i++) ret[i][i] = 1;
        while (e) {
            if (e&1) ret = mat_mul(ret, a);
            e >>= 1;
            a = mat_mul(a,a);
        }
        return ret;
    };

    auto apply = [&] (vvi a, vi b) {
        int n = a.size();
        vi ret(n);
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                ret[i] += a[i][j] * b[j];
                ret[i] %= mod;
            }
        }
        return ret;
    };

    vp b;
    for (auto mask : a) {
        if (b.empty() || b.back().first != mask) b.push_back({mask,1});
        else b.back().second++;
    }
    int sz = 20;
    vector<vvi> exp0(sz);
    for (int i=0; i<sz; i++) exp0[i] = mat_exp(mask2mat[0],1<<i);

    vi ans(R);
    ans[I] = 1;

    for (auto [mask,cnt] : b) {
        if (mask == 0) {
            for (int i=0; i<sz; i++) {
                if (cnt>>i&1) ans = apply(exp0[i],ans);
            }
        }
        else {
            auto mat = mat_exp(mask2mat[mask],cnt);
            ans = apply(mat, ans);
        }
    }

    for (auto x : ans) cout << x << " ";
    cout << "\n";
}