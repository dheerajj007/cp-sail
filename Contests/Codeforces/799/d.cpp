#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string a;
	int x;
	cin >> a >> x;
	
	int h = stoi(a.substr(0, 2));
	int m = stoi(a.substr(3, 2));
	
	int newh = x/60;
	int newm = x%60;
	
	while(newh!=h and newm!=m){
		
		newh += h;
		newm += m;
		cout << newh << " " << newm << endl;
	}
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}