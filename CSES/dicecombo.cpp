#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
const ll MOD = 1e9 + 7;

ll f(ll n, vector<ll>& dp){
	if(n==0) return 1;
	if(n<0) return 0;

	ll ans =0;
	if(dp[n]!=-1) return dp[n];

	for(int i=1; i<=6; i++){
		if(i<=n){
			ans = (ans+f(n-i, dp))%MOD;
		}
	}
	return dp[n] = ans;

}



void solve(){
	ll n;
	cin >> n;
	vector<ll> dp(n+1,-1);

	cout << f(n, dp);
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}


