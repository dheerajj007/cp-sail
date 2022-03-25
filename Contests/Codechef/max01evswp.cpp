#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	int zeros =0 , ones = 0;
	for(char i:s){
		if(i=='1') ones++;
		else zeros++;
	}
	
	int mn = min(zeros, ones);
	cout << mn << endl;	

}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}