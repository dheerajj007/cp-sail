
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
	int n, e;
	cin >> n >> e;
	vector<vector<int>> g(n);
	for(int i=0; i<e; i++){
		int x, y;
		cin>> x>> y;
		x--;y--;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	vector<bool> vis(n, false);
	vector<int> ans;
	int count =0;
	for(int i=0; i<n; i++){
		if(vis[i]==false){
			ans.push_back(i+1);
			dfs(g, i, vis);
			count++;
		}
	}
	cout << count-1 << endl;
	
	//i was supposed to print how i am gonna connect all these 
	for(int i=1;i<ans.size();++i)
		cout << ans[i-1] << " " << ans[i] << endl;
	cout << endl;
	
	
 }
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}