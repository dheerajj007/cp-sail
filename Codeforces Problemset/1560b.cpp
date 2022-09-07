#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	ll a, b, c;
	cin >> a >> b >> c;
	int halfsize = abs(a-b);
	int totalsize = (2*halfsize);
	if(c> totalsize){
		cout << "-1";
	} 
	else if(halfsize==1)
		cout << "-1";
	else if(a>totalsize || b>totalsize)
		cout << "-1";
	else {


	if(c>halfsize){
		cout << c-halfsize;
	} else {
		cout << c+halfsize;
	}
	}
	cout << endl;
	

	
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


