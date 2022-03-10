#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	
	if(n==1) {cout << 1;return;}
	if(n==2 or n==3) {cout << "NO SOLUTION";return;}
	
	for(int i=2; i<=n; i+=2)
		cout << i << " ";
	for(int i=1; i<=n; i+=2)
		cout << i << " ";
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}