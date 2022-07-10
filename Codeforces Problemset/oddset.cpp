#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	n*=2;
	int odd =0, even =0;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		if(x%2)
			odd++;
		else 
			even++;
	}
	if(odd==even)
		cout << "Yes\n";
	else 
		cout << "No\n";

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}


