#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n; 
	cin >> n; 
	string a;
	cin >> a;
	int m;
	cin >> m;
	set<pair<int, int>> b;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		b.insert({x,y});
	}

	int x =0, y=0;
	for(int i=0; i<n; i++){
		if(a[i]=='R')
			++x;
		if(a[i]=='U')
			++y;
		if(a[i]=='D')
			--y;
		if(a[i]=='L')
			--x;

		if(b.count({x, y})==1){
				x=0;
				y=0;
		}
				

	}
	cout << x << " " << y << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
