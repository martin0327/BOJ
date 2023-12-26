#include<bits/stdc++.h>
#include <type_traits>


#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
// #define endl "\n"
#define int long long
#define PI 3.14159265359

using namespace std;


using ld = long double;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int,int>;
using vp = vector<pii>;
using vvp = vector<vp>;
using vs = vector<string>;
using vvs = vector<vs>;
using ti3 = tuple<int,int,int>;
using vti3 = vector<ti3>;

template<typename T>
using min_pq = priority_queue<T, vector<T>, greater<T>>;
template<typename T>
using max_pq = priority_queue<T>;


template<typename T>
void printv(vector<T> v) {
    for (auto e : v) {
        cout << e << " ";
    }   cout << "\n";
}
 
template<typename T>
void printvv(vector<T> vv) {
    for (int i=0; i<vv.size(); i++) {
        cout << i << ": ";
        for (auto e : vv[i]) {
            cout << e << " ";
        }   cout << "\n";
    }
}

template<typename T>
void ri(T &x) {
    cin >> x;
}
template<typename T, typename... Args>
void ri(T &x, Args&... args) {
    ri(x);
    ri(args...) ;
}
template<typename T>
void ri(vector<T> &v) {
    for (auto &x : v) {
        cin >> x;
    }
}
template<typename T, typename... Args>
void ri(vector<T> &v, Args&... args) {
    ri(v);
    ri(args...);
}

template<typename T>
void po(T x) {
    cout << x << "\n";
}
template<typename T, typename... Args>
void po(T x, Args... args) {
    cout << x << " ";
    po(args...) ;
}
template<typename T>
void po(vector<T> &a) {
    int sz = a.size();
    for (int i=0; i<sz; i++) {
        cout << a[i] << ((i==sz-1)?"\n":" ");
    }
}

void __print(int x) {cerr << x;}
void __print(signed x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}


template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T1, typename T2, typename T3>
void __print(const tuple<T1, T2, T3> &x) {cerr << '{'; __print(get<0>(x)); cerr << ','; __print(get<1>(x)); cerr << ','; __print(get<2>(x)); cerr << '}';}
template<typename T1, typename T2, typename T3, typename T4>
void __print(const tuple<T1, T2, T3, T4> &x) {cerr << '{'; __print(get<0>(x)); cerr << ','; __print(get<1>(x)); cerr << ','; __print(get<2>(x)); cerr << ','; __print(get<3>(x)); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
template<typename T1, typename T2>
void __print(map<T1,T2> &mp) {for (auto [k,v] : mp) {cerr << '{'; __print(k); cerr << ':'; __print(v); cerr << '}';}}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


////////////////////////////////////

void io_util() {
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    cin.tie(0)->sync_with_stdio(0);
    cout.precision(17);
}

////////////////////////////////////

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(); 
signed main() {
    io_util();
    int tc = 1;
    // ri(tc);
    for (int i=1; i<=tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}

void solve() {
    int n,m; 
    ri(n,m);
    vvp adj(n);
    vvp radj(n);
    vi deg(n);
    while (m--) {
        int u,v,w; 
        ri(u,v,w);
        u--; v--;
        adj[u].push_back({v,w});
        radj[v].push_back({u,w});
        deg[u]++;
    }
    queue<int> q;
    for (int i=0; i<n; i++) {
        if (deg[i] == 0) {
            q.push(i);
        }
    }
    vi len(n);

    while (q.size()) {
        auto u = q.front();
        q.pop();
        for (auto [v,w] : adj[u]) {
            len[u] = max(len[u],len[v]+1);
        }
        for (auto [v,w] : radj[u]) {
            if (--deg[v]==0) q.push(v);
        }
    }

    map<int,vi> len_mp;
    for (int i=0; i<n; i++) {
        len_mp[len[i]].push_back(i);
    }
    vp ord_acc(n);
    // debug(len_mp);
    for (auto [l,cand] : len_mp) {
        map<ti3,int> temp_mp;
        for (auto u : cand) {
            for (auto [v,w] : adj[u]) {
                if (len[v] == l-1) {
                    auto [ord,acc] = ord_acc[v];
                    temp_mp[{w,ord,acc}];
                }
            }
        }
        int sz = 0;
        for (auto &[k,v] : temp_mp) v = sz++;
        for (auto u : cand) {
            int min_ord = 1e9;
            int new_acc = 1e9;
            for (auto [v,w] : adj[u]) {
                if (len[v] == l-1) {
                    auto [ord,acc] = ord_acc[v];
                    int nord = temp_mp[{w,ord,acc}];
                    if (min_ord > nord) {
                        min_ord = nord;
                        new_acc = acc+w;
                    }
                }
            }
            if (adj[u].empty()) ord_acc[u] = {0,0};
            else ord_acc[u] = {min_ord,new_acc};
        }
    }
    for (int i=0; i<n; i++) {
        auto [ord,acc] = ord_acc[i];
        po(len[i],acc);
    }

}