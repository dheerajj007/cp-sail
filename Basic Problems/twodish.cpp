#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, a, b,c ;
	cin >> n >> a >> b >> c;
	
	if(a+c>=n and b>=n){
		cout << "YES";
	}
	else 
		cout << "NO";
	
	cout << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}