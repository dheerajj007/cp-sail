#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n, x=0;
	cin >> n;
	
	if(n%2==0){
		cout << n/2;
	}
	else{
		cout << "-" << (n/2)+1;
	}
	
	cout << "\n";
	// for(int i=1; i<=n; i++){
	// 	if(x<0) x += i;
	// 	else x -= i;
	// }
	// cout << x << "\n";
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}