#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int v, e;
	cin >> v >> e;
	vector<set<int>> adj(v+1);

	for(int i=1;i<=e;i++){
		int a ,b;
		cin >> a >> b;
		adj[a].insert(b);
		adj[b].insert(a);
	}

	for(auto i:adj){
		for(auto j:i){
			cout << i << " " <<  j << " ";
		}
		cout << endl;
	}



	
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


