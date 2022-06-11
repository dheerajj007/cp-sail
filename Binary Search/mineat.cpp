#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, h;
	cin >> n >> h;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	int s = INT_MAX, e = INT_MIN;
	for(int i:a){
		s = min(s, i);
		e = max(e, i);
	}
	int s =
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}