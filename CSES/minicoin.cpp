#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

int f(vector<int> &coins, int x){
	if(x==0) return 0;
	if(x<0) return INT_MAX;

	int ans = INT_MAX;
	
	for(int i=0; i<coins.size(); i++){
		if(coins[i]<=x){
			ans = min(ans, f(coins, x-coins[i]));
		}
	}
	return ans;
}



void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> c(n);
	for(int i=0; i<n;i++)
		cin >> c[i];

	cout << f(c, x);





	
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


