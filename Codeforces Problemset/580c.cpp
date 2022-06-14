#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

struct graph {
  int n;
  vector<bool> vis;
  vector<vector<int>> edges;
  
  void init(int size) {
    n = size;
    vis = vector<bool>(n);
    edges = vector<vector<int> >(n);
  }

  void readGraph(int numEdges, bool isTheGraphUndirected) {
    for(int i=0; i < numEdges; i++){
      int u, v; cin >> u >> v;
      --u; --v;
      edges[u].push_back(v);
      if (isTheGraphUndirected) edges[v].push_back(u);
    }
  }

  void bfs(int sourceVertex) {
    fill(vis.begin(), vis.end(), false);

    queue<int> q; 
    q.push(sourceVertex);
    while (!q.empty()) {
      int focusedVertex = q.front();
      q.pop(); 
      if (vis[focusedVertex]) continue; 
      vis[focusedVertex] = 1; 
      
      for (int i: edges[focusedVertex]) {
        if (vis[i]) continue; 
        q.push(i); 
      }
    }
  }
};

void solve(){
	int n, m;
	cin >> n >> m;
	int cat[n];
	for(int i=0; i<n; i++)
		cin >> cat[i];
	graph g(n);
	g.init(n);
	readGraph(n-1, false);
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}