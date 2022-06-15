#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	float ans = 0;
	for(int i=0; i<n; i++){
		string x;
		cin >> x;
		int a = x[0]-'0';
		int b = x[2] -'0';
		float res  = (1.0*a)/b;
		ans += res;
		
	}
	int a = ans+1;
	cout << a
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}