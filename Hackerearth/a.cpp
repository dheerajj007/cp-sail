#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

int dfs(vector<int>& room, int src, int t, vector<bool>& vis){
	if(room[src]==t)
		return 1;
	int ans =0;
	if(vis[src]==false){

		vis[src] = true;
		ans += dfs(room, room[src], t, vis);
	}

	return ans;

}

void solve(){
	int n;
	cin >> n;
	vector<int> room(n);
	for(int i=0; i<n; i++)
		cin >> room[i];

	int  final = INT_MIN;
	for(int i=1; i<=n; i++){
		vector<bool> vis(n+1, false);
		int ans = dfs(room, i, i, vis);
		final = max(final, ans);
		
	}
	cout << (final==INT_MIN?-1:final) << endl;
	

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
	
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
    	}
 
	return 0;
}


