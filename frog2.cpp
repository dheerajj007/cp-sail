#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

ll fun(ll n,ll k, ll h[], vector<ll> &dp){
	if(n==0) return 0;

	ll minsteps = INT_MAX;
	ll ans;

	for(ll i=1; i<=k; i++){
		if(n-i >=0)
			ans = fun(n-i, k, h, dp) + abs(h[n]+ h[n-i]);
		minsteps = min(minsteps, ans);

	}
	return minsteps;

}

void solve(){
	ll n, k;
	cin >> n >> k;
	ll h[n];
	for(int i=0; i<n; i++) cin >> h[i];

	vector<ll> dp(n+1, -1);
	cout << fun(n, k, h, dp);


	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
