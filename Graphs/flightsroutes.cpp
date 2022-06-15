#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void dfs(vector<vector<int>>& adj, int start, vector<bool> &vis){
	vis[start] = true;
	for(auto i:adj[start]){
		if(vis[i]==false){
			dfs(adj, i, vis);
		}
	}
	
}
void solve(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> g(n);
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		x--; y--;
		g[x].push_back(y);
	}
	
	for(int i=0; i<n; i++){
		vector<bool> vis(n, false);
		dfs(g, i, vis);
		for(auto i:vis){
			if(!i){
				cout << "NO" << endl;
				return;
			}
		}
	}
	
	cout << "YES";
	
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}