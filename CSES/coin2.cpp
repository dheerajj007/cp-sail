#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

ll f(ll c[], ll n, ll x, ll start, vector<vector<ll>> &dp){
	if(x == 0)
		return 1;
	if(x<0) return 0;

	if(dp[start][x]!=-1) return dp[start][x];

	ll ans = 0;
	for(ll i = start; i<n; i++){
		if(c[i]<=x)
			ans = (ans+f(c, n, x-c[i], i, dp))%MOD;
	}

	return dp[start][x]= ans;
}

void solve(){
	ll n, x;
	cin >> n >> x;
	ll c[n];
	for(ll i=0; i<n; i++)
		cin >> c[i];


	vector<vector<ll>> dp(n+1, vector<ll> (x+1, -1));
	cout << f(c, n, x, 0, dp);



	
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


