#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];

	int sum =0;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			sum = (sum%MOD+ abs( a[i]-a[j])%MOD)%MOD;

		}
	}
	sort(a, a+n);
	cout << sum*a[n-1] << endl;

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
	
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
    	}
 
	return 0;
}


