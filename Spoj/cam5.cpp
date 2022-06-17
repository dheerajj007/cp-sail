#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void dfs(vector<vector<int>>& g, vector<bool>& vis, int start){
  vis[start] = true;
  for(auto i:g[start]){
    if(vis[i]==false){
      dfs(g, vis, i);
    }
  }
}

void solve(){
  int n, e;
  cin >> n >> e;
  vector<vector<int>> g(n);
  for(int i=0; i<e; i++){
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
//   for(int i=0; i<n; i++){
//       cout << i << "->";
//       for(int j:g[i]){
//           cout << j << " ";
//       }
//       cout << endl;
//   }
  
  int cnt = 0;
  vector<bool> vis(n, false);
  for(int i=0; i<n; i++){
    if(vis[i]==false){
      dfs(g, vis, i);
      cnt++;
    }
  }
  
  cout << cnt << endl;
  
  
}
 
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
  
  int tc=1;
  cin>>tc;
 
  while(tc--) solve();
  return 0;
}