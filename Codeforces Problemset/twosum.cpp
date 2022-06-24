#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n, x;
	cin >> n >> x;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];

	map<int, int> m;

	for(int i=0; i<n ;i++){
		ll y = x-a[i];
		if(m.count(y)){
			cout << m[y]+1 << " " << i+1;
			return;
		}
		 else 
			 m[a[i]] =i;
	}
	cout << "IMPOSSIBLE";
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}


