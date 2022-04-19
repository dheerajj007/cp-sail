#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;

	set<char> a;
	while(n--){
		char x;
		cin >> x;
		if(isupper(x))
			a.insert(tolower(x));
		else
			a.insert(x);
	}


	if(a.size()==26) cout << "YES";
	else cout << "NO";
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
