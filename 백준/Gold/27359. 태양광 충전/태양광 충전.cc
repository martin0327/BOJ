#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<ll>;
using vvi = vector<vi>;
const ll inf = 2e18;

void solve();
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}

void solve() {
    ll N,B,C;
    cin >> N >> B >> C;
    vi P(N), F(N), D(N);
    for (auto &x : P) cin >> x;
    for (auto &x : F) cin >> x;
    for (auto &x : D) cin >> x;

    vvi dp(N+1, vi(C+1,inf));
    dp[0][B] = 0;

    for (int i=0; i<N; i++) {
        for (int j=0; j<=C; j++) {
            int j1 = j - D[i], j2 = min(C,j+P[i]);
            if (j1 >= 0) dp[i+1][j1] = min(dp[i+1][j1], dp[i][j]);
            dp[i+1][j2] = min(dp[i+1][j2], dp[i][j] + D[i]*F[i]);
        }
    }

    ll ans = inf;
    for (int j=B; j<=C; j++) ans = min(ans, dp[N][j]);
    cout << ans << "\n";
}