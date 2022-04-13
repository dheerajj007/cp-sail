#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll size = 1e6+2434;
ll c[size];
vector<ll> edges[100005];
bool vis[100005];

//finding the minimum cost in the connceted compnent of graph
ll dfs(ll v){
    ll mn = c[v];
    vis[v]= 1;
    
    for(ll x:edges[v]){
        if(!vis[x]){
            mn = min(mn, dfs(x));
            
        }
    }
    return mn;
}
int main() {
    ll n, m;
    cin >> n >> m;
    
    for(ll i=0; i<n; i++) cin >> c[i];
    
    for(ll i=0; i<m; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    
    ll ans = 0;
    //finding total cost in all parts of graph
    for(ll i=0; i<n; i++){
        if(!vis[i]){
            ans += dfs(i);
        }
    }
    cout << ans;
    return 0;
}
