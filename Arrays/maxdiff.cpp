#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, s;
	cin >> n >> s;
	if(n < s){
		cout << n - (s-n);
	}
	else{
		cout << s;
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