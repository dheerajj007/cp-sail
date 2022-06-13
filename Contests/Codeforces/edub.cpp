#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	
	while(q--){
		int x, y;
		cin >> x >> y;
		
		int j = n-x;
		int k = n-y;
		int sum =0;
		for(;j<=k;j++)
			sum+= a[j];
		
		cout << sum << endl;
		
	}
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}