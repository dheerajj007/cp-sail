#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	if(c < a or d < b) 
		cout << "IMPOSSIBLE\n";
	else 
		cout << "POSSBILE\n";
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
