#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<ll,ll>;
using vi = vector<ll>;
using vvi = vector<vi>;
using vp = vector<pii>;
using vvp = vector<vp>;

const ll inf = 1e18;

template<typename T>
using min_pq = priority_queue<T, vector<T>, greater<T>>;

template<typename T>
void chmin(T &x, T y) {x = min(x,y);}


template<typename T>
void asort(vector<T> &a) {sort(a.begin(), a.end());}

template<typename T>
vector<T> get_unique(vector<T> a) {
    asort(a);
    a.erase(unique(a.begin(), a.end()), a.end());
    return a;
}

vector<int> solution(int n, vector<vector<int>> roads) {
    ll m = roads.size();
    vvp adj(n);
    vector<tuple<ll,ll,ll,ll>> edges(m);
    for (int i=0; i<m; i++) {
        auto r = roads[i];
        int u = r[0]-1, v = r[1]-1, l = r[2], t = r[3];
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
        edges[i] = {u,v,l,t};
    }

    vi dist1(n,inf), dist2(n,inf);

    function<void(int,vi&)> f = [&] (int root, vi& dist) {
        dist[root] = 0;
        min_pq<pii> pq;
        pq.push({0,root});
        while (pq.size()) {
            auto [d,u] = pq.top(); pq.pop();
            if (d > dist[u]) continue;
            for (auto [v,idx] : adj[u]) {
                auto [uu,vv,l,t] = edges[idx];
                ll w = l + t;
                if (dist[u] + w < dist[v]) {
                    pq.emplace(dist[v] = dist[u]+w, v);
                }
            }
        }
    };
    f(0,dist1); f(n-1,dist2);
    ll min_d = dist1[n-1];
    vector<int> ans(m);
    vi crt(m);
    for (int i=0; i<m; i++) {
        auto [u,v,l,t] = edges[i];
        ll d = dist1[u] + dist2[v];
        d = min(d, dist2[u] + dist1[v]);
        if (d + l < min_d) ans[i] = 1;
        if (d + l + t == min_d) crt[i] = 1;
    }
    vi vis(n), in(n,-1), low(n,-1);
    int t = 0;
    function<void(int, int)> g = [&] (int u, int p) {
        vis[u] = 1;
        in[u] = low[u] = t++;
        for (auto [v,idx] : adj[u]) {
            if (!crt[idx]) continue;
            if (v == p) continue;
            if (vis[v]) chmin(low[u],in[v]); 
            else {
                g(v, u);
                chmin(low[u], low[v]);
                if (low[v] > in[u]) {
                    ans[idx] = 1;
                }
            }
        }
    };
    g(0,-1);
    vector<int> res;
    for (int i=0; i<m; i++) {
        if (ans[i]) res.push_back(i+1);
    }
    if (res.empty()) return {-1};
    else return res;
}