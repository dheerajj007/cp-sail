#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int count =0;
	if(b>a) count++;
	if(c>a) count++;
	if(d>a) count++;
	cout << count << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}