#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int x, y;
	cin >> x >> y;
	
	if(y>x+200 or y<x){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	cout << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}