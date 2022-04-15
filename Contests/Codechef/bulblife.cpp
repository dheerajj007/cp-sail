#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n, x;
	cin >> n >> x;

	ll sum = 0;
	ll p = n-1;
	while(p--){
		ll a;
		cin >> a;
		sum += a;
	}

	ll final = (n*x - sum);
	if(final < 0) cout << "0\n";
	else cout << final << endl;


	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
