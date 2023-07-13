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

void solve() {
    ll n,m; cin >> n >> m;
    vvi adj(n), radj(n);
    while (m--) {
        int u,v; 
        cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
        radj[v].push_back(u);
    }

    vi a(n); for (auto &x : a) cin>>x;
    ll src;
    cin >> src >> m;
    src--;
    vi term(n);
    while (m--) {
        ll x; cin >> x;
        x--;
        term[x] = 1;
    }

    vi vis(n), comp(n), st;
    function<void(ll,ll,ll)> f = [&](ll u, ll flag, ll idx) {
        vis[u] = 1;
        for (auto v : flag?adj[u]:radj[u]) {
            if (!vis[v]) f(v,flag,idx);
        }
        if (flag) st.push_back(u);
        else comp[u] = idx;
    };

    for (ll u=0; u<n; u++) if (!vis[u]) f(u,1,0);
    vis.assign(n,0);
    m = 0;
    reverse(st.begin(), st.end());
    for (auto u : st) if(!vis[u]) f(u,0,m++);
    vvi cadj(m);
    vi b(m), cterm(m);
    for (ll i=0; i<n; i++) {
        ll u = comp[i];
        b[u] += a[i];
        cterm[u] |= term[i];
        for (auto j : adj[i]) {
            ll v = comp[j];
            if (u==v) continue;
            cadj[u].push_back(v);
        }
    }
    for (auto &v : cadj) {
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
    }
    
    src = comp[src];
    queue<ll> q;
    q.push(src);
    vis.assign(m,0);
    vis[src] = 1;
    vi deg(m);
    while (q.size()) {
        auto u = q.front();
        q.pop();
        for (auto v : cadj[u]) {
            deg[v]++;
            if (vis[v]) continue;
            vis[v] = 1;
            q.push(v);
        }
    }

    q.push(src);
    vi dp(m);
    dp[src] = b[src];
    ll ans = 0;
    while (q.size()) {
        auto u = q.front();
        q.pop();
        if (cterm[u]) ans = max(ans, dp[u]);
        for (auto v : cadj[u]) {
            dp[v] = max(dp[v], b[v]+dp[u]);
            if (--deg[v]==0) {
                q.push(v);
            }
        }
    }
    cout << ans << "\n";
}