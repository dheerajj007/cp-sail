#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll a, b;
	cin >> a >> b;

	if(a==0){
		cout << "1\n";
		return;
	}

	ll sum = a + 2*b + 1;

	cout << sum << endl;

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
