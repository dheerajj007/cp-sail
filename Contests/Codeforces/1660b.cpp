#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++) cin >> a[i];

	sort(a, a+n);

	if(n==1){
		cout << "NO\n";
		return;
	}
	if(n==2){
		if(abs(a[0]-a[1]) > 1){
			cout << "NO\n";
		}
		else cout << "YES\n";
		return;
	}
	ll i=n-3;
	ll s = a[n-1] - a[n-2];
	while(i){
		if(a[i] >  s){
			cout << "NO\n";
			return;
		}
		s -= a[i];
		i--;
	}
	cout << "YES\n";
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
