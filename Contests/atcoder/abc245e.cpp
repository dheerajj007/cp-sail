#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n, m;
	cin >> n >> m;
	
	ll a[n], b[n], c[m], d[m];
	
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	
	for(int i=0; i<m; i++){
		cin >> c[i];
	}
	for(int i=0; i<m; i++){
		cin >> d[i];
	}
	
	int cnt = 0;
	
	bool flag = false;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(c[i]>=a[j] and d[i]>=b[j]){
				
				cnt++;
				break;
				
			}
			if(cnt==n) break;
			
		}
	}
// 	cout << cnt;
	if(cnt==n) cout << "Yes";
	else cout << "No";
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}