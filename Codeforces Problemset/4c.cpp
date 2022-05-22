#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n; 
	cin >> n;
	map<string, int> m;
	while(n--){
		string a;
		cin >> a;
		if(m.count(a)){
			cout << a << m[a];
		}
		else{
			cout << "OK";
		}
		m[a]++;
	cout << endl;
	}
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
