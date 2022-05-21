#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int x, y, z; 
	cin >> x >> y >> z;

	if(z%y==0 and z%x==0){
		cout << "ANY\n";
		return;
	}

	if(z%x ==0){
		cout << "CHICKEN\n";
		return;
	}
	if(z%y ==0){
		cout << "DUCK\n";
		return;
	}
	cout << "NONE\n";


	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
