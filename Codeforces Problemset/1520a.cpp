#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n;
	cin >> n; 
	string a;
	cin >> a;

	unordered_set<char> s;
	if(n==1){
		cout << "YES\n";
		return;
	}
	s.insert(a[0]);
	for(int i=1; i<n; i++){
		if(s.count(a[i]) && a[i]!=a[i-1]){
			cout << "NO\n";
			return;
		}
		s.insert(a[i]);
	}
	cout << "YES\n";

	
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


