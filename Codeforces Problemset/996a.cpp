#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n;
	cin >> n;

	ll count = 0;
	while(n){
		if(n>=100)
			n -=100;
		else if(n>=20)
			n-=20;
		else if(n>=10)
			n-=10;
		else if(n>=5)
			n-=5;
		else 
			n-=1;


		count++;
	}
	cout << count;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
