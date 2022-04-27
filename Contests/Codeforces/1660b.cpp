#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	if(n==1){
		if(a[0] > 1) cout << "NO";
		else cout << "YES";
		cout << endl;
		return;
	}

	sort(a, a+n);
	if(a[n-2] + 1 < a[n-1]) cout << "NO";
	else cout << "YES";
	cout << "\n";
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
