#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

ll rec(ll n){
	if(n==0){
		return 0;
		
	}
	ll res = rec(n-1);
	ll a = (n-1)+2*(n);
	return a + res;
}

void solve(){
	ll n;
	cin >> n;
	cout << rec(n) << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}