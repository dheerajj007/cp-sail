#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, x; 
	cin >> n >> x;
	int maxr = INT_MIN;
	
	while(n--){
		int s, r;
		cin >> s >> r;
		
		if(s<=x){
			maxr = max(r, maxr);
		}
		
		
	}
	cout << maxr << endl;
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}