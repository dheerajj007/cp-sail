#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	
	if((x==a or x==b) and (y==a or y==b)){
		cout << "0\n";
	}
	else if(x==a or y==a or x==b or y==b) cout << "1\n";
	else cout << "2\n";
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}