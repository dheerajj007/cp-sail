#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];

	int maxi = -1;
	int mx = INT_MIN;
	int mn = INT_MAX;
	for(int i=0; i<n; i++){
		if(mx<a[i]){
			maxi = i;
			mx = a[i];
		}
		if(mn>a[i])
			mn = a[i];
	}
	ll left = INT_MIN, right =INT_MIN;

	if(maxi>0) left = a[maxi]*a[maxi-1];
	if(maxi<n-1) right = a[maxi]*a[maxi+1];

	cout << max(max(left, right), mn*a[maxi]) << endl;

	
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


