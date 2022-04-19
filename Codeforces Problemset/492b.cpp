#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

ll n, l;

ll last = 0;

bool predicate(ll m, ll a[]){
	for(int i=0; i<n; i++){
		if(a[i]-m > last)
			return false;
		last = a[i]+m;
	}
	return true;
}

void solve(){
	cin >> n >> l;
	ll a[n];
	for(ll i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	ll e = INT_MIN;
	for(int i=1; i<n; i++){
		if(a[i]-a[i-1]>e)
			e = a[i] - a[i-1];
	}
	cout << e;

	ll s = 0;

	while(s < e){
		ll m = s + (e-s)/2;
		if(predicate(m, a))
			e = m;
		else
		       	s = m+1;
	}

	cout << s;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
