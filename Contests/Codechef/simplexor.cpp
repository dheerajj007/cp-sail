#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll l, b;
	cin >> l >> b;
	
	ll f=0, count = 0;
	
	for(ll i=l; i<=b; i++){
		ll s= i;
		ll q = i+1;
		ll p = i+2;
		ll r = i+3;
		
		if((s^p^q^r)==0 and r<=b){
			f=1;
			cout << s << " " << q << " " << p << " " << r;
			break;
		}
		else{
			count++;
			if(count>10)
			break;
		}
		if(f==0){
			cout << "-1\n";
		}
	}
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}