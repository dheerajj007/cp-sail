#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a >= b and a <=c){
		cout << "Take second dose now";
	}
	else if(a < b)
		cout << "Too Early";
	else if(a > c)
		cout << "Too Late";
	
	cout << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}