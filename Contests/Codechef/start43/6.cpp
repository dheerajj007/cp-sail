#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll a, b, c;
	cin >>a >> b >> c;
	ll sum = a+b+c;
	
	int i=0;
	ll rem= (sum /3)+1;
	
	while(rem--){
		sum+=pow(2, i++);w
// 		cout << sum 
		if(sum%3==0){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}