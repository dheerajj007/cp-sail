#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int r, c;
	cin >> r >> c;
	int newr = 15-r, newc = 15-c;
	int mx = max(newr, newc);

	map<int, bool> m;
	m[15] = false;
	m[13] = true;
	m[11] = false;
	m[9] = true;
	m[7] = false;
	m[5] = true;
	m[3] = false;
	m[1] = true;

	if(!m.count(mx)){
		mx++;
	}

	if(!m[mx])
		cout << "black";
	else
		cout << "white";

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
	
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
    	}
 
	return 0;
}


