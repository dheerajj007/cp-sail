#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n;
	cin >> n;
	if(n < 5){
		cout << n << endl;
		return;
	}
	ll rem  = n/5;
	ll a = n%5;
	cout << 4*rem + a << endl;

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
