#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	if(n==1 or n==2) cout << "0\n";
	else{
		if(n%2==0) 
			cout << n/2 - 1;
		else 
			cout << n/2;

		cout << "\n";
	}
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
