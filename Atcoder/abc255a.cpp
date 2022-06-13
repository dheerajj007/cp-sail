#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int a[3][3];
	int r, c;
	cin >> r >> c;
	
	for(int i=1; i<=2 ;i++){
		for(int j=1; j<=2; j++){
			cin >> a[i][j];
		}
	}
	cout << a[r][c];
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}