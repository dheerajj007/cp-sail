#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	string ans;
	for(int i=0; i<n; i+=2){
		string x = a.substr(i, 2);
		if(x=="00") ans.push_back('A');
		if(x=="01") ans.push_back('T');
		if(x=="10") ans.push_back('C');
		if(x=="11") ans.push_back('G');
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