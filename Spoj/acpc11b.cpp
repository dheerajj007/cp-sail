#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int m, n;
	cin >> m;
	int a[m];
	for(int i=0; i<m; i++)
		cin >> a[i];
	
	cin >> n;
	int b[n];
	for(int i=0; i<n; i++)
		cin >> b[i];
	
	sort(a, a+n);
	
	int ans= INT_MAX;
	for(int i:b){
		int x = a[lower_bound(a, a+n, i)];
		int diff = abs(i-x);
		ans = min(diff, ans);
	}
	
	// int ans = INT_MAX;
	// for(int i:a){
	// 	for(int j:b){
	// 		int diff = abs(i-j);
	// 		cout << diff << endl;
	// 		ans = min(diff, ans);
	// 	}
	// }
	
	cout << ans << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}