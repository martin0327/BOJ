#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<ll>;
using vvi = vector<vi>;

void solve();
int main() {
    cin.tie(0)->sync_with_stdio(0);
    solve();
}

template<typename T>
void debug(vector<T> &a) {
    for (auto x : a) {
        cerr << x << " ";
    }   cerr << endl;
}
template<typename T>
void debug(vector<vector<T>> &a) {
    for (auto b : a) {
        for (auto x : b) {
            cerr << x << " ";
        }   cerr << endl;
    }   cerr << endl;
}

void solve() {
    ll n,m;
    cin>>n>>m;
    n <<= 1;
    vvi adj(n), radj(n);
    while (m--) {
        vi a(3),b(3),c(3);
        for (int i=0; i<3; i++) {
            ll x;
            char y;
            cin>>x>>y;
            // cout << x << " " << y << endl;
            a[i] = x-1;
            b[i] = (y=='B');
        }
        for (int i=0; i<3; i++) {
            a[i] <<= 1;
            a[i] ^= b[i];
            c[i] = a[i] ^ 1;
        }
        for (int i=0; i<3; i++) {
            adj[c[i]].push_back(a[(i+1)%3]);
            adj[c[i]].push_back(a[(i+2)%3]);
            radj[a[(i+1)%3]].push_back(c[i]);
            radj[a[(i+2)%3]].push_back(c[i]);
        }
    }
    // debug(adj);
    // cerr << endl;
    // debug(radj);
    m = 0;

    vi vis(n), comp(n), ord;
    function<void(ll,ll,ll)> f = [&](ll u, ll flag, ll idx) {
        vis[u] = 1;
        for (auto v : flag?adj[u]:radj[u]) {
            if (!vis[v]) f(v,flag,idx);
        }
        if (flag) ord.push_back(u);
        else comp[u] = idx;
    };

    for (int i=0; i<n; i++) if (!vis[i]) f(i,1,0);
    vis.assign(n,0);
    reverse(ord.begin(), ord.end());
    for (auto u : ord) if (!vis[u]) f(u,0,m++);
    string ans;
    for (int i=0; i<n; i+=2) {
        ll x = comp[i], y = comp[i+1]; 
        if (x == y) {
            cout << -1 << "\n";
            return;
        }
        if (x > y) ans += 'R';
        else ans += 'B';
    }
    cout << ans << "\n";
}


