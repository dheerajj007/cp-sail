#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	
	int ones=0, zeros=0;
	for(auto i:a){
		if(i=='1') ones++;
		if(i=='0') zeros++;
	}
	
	if(ones==0 or zeros==0) {
		cout << "1" << endl; 
		return;
	}
	
	if(ones==zeros){
		cout << ones+zeros << endl;
		return;
	}
	
	int mx = min(ones, zeros);
	cout << 2*mx+1 << endl;
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}