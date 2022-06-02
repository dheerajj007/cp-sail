#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int a, b, p, q;
	cin >> a >> b >> p >> q;
	int m1 = max(a, b);
	int m2 = max(p,q);

	if(m1==m2) cout << "TIE";
	else if(m1<m2) cout << "P";
	else cout << "Q";
	cout << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
