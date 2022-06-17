#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
bool isBipartite(vector<vector<int>>, int src)
{
    int colorArr[V];
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;
 
    colorArr[src] = 1;
 
    queue <int> q;
    q.push(src);
 
    while (!q.empty())
    {
        // Dequeue a vertex from queue ( Refer http://goo.gl/35oz8 )
        int u = q.front();
        q.pop();
 
        // Return false if there is a self-loop
        if (G[u][u] == 1)
        return false;
 
        // Find all non-colored adjacent vertices
        for (int v = 0; v < V; ++v)
        {
            // An edge from u to v exists and
            // destination v is not colored
            if (G[u][v] && colorArr[v] == -1)
            {
                // Assign alternate color to this adjacent v of u
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }
 
            // An edge from u to v exists and destination
            // v is colored with same color as u
            else if (G[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
 
    // If we reach here, then all adjacent 
    // vertices can be colored with alternate color
    return true;
}
 
void solve(){
	int n, e;
	cin >> n >> e;
	vector<vector<int>> adj(n);
	for(int i=0; i<e; i++){
		int u, v;
		cin >> u >> v;
		u--; v--;
		
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<bool> vis(n, false);
	for(int i=0; i<n; i++){
		if(vis[i]==false){
			if(isCycleBFS(adj, i, vis)){
				cout << "Suspicious bugs found!" << endl;
				return;
			}
		}
	}
	cout << "No suspicious bugs found!" << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	for(int i=1; i<=tc; i++) {
		cout << "Scenario #" << i << ":" << endl;
		
		solve();
	}
	return 0;
}