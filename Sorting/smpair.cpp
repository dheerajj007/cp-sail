#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	sort(a, a+n);
	int sum =INT_MAX;
	
	for(int i=0; i<n-1; i++){
		int diff = a[i+1]-a[i];
		sum = min(diff, sum);
		
	}
	cout << sum << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}