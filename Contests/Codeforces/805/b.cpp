#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string a;
	cin >> a;
	set<char> s;
	int ans = 1;

	for(int i=0; i<a.length(); i++){
		if(!s.count(a[i]) and s.size()==3){
				ans++;
				s.clear();

		}
		s.insert(a[i]);



	}
	cout << ans << endl;
			
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}


