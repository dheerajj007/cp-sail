#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n;
	ll m[n];
	ll f[n];
	for(ll i=0; i<n; i++)
		cin >> m[i];
	for(ll i=0; i<n; i++)
		cin >> f[i];
	
	ll sum =0 ;
	for(ll i=0; i<n; i++){
		sum += m[i]*f[i];
		
	}
	cout << sum << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}