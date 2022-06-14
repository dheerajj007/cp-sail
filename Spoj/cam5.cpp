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
    vis = vector<bool> (n);
    edges = vector<vector<int>> (n);
  }

  void readGraph(int numEdges, bool isTheGraphUndirected) {
    for(int i=0; i < numEdges; i++){
      int u, v; cin >> u >> v;
    //   --u; --v;
      edges[u].push_back(v);
      if (isTheGraphUndirected) edges[v].push_back(u);
    }
  }

  int bfs(int sourceVertex) {
    fill(vis.begin(), vis.end(), false);
    int count =0;
    queue<int> q; 
    q.push(sourceVertex);
    while (!q.empty()) {
      int focusedVertex = q.front();
      q.pop(); 
      if (vis[focusedVertex]) continue; 
      vis[focusedVertex] = 1; 
      
      count++;
      
      for (int i: edges[focusedVertex]) {
        if (vis[i]) continue; 
        q.push(i); 
      }
    }
    return count;
  }
};

void solve(){
	int n, e;
	cin >> n >> e;
	graph g;
	g.init(n);
	g.readGraph(e, true);
	
		
	int count = g.bfs(0);
	int res =  n-count;
	cout << res+1 << endl;
	
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}