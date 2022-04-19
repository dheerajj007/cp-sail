#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, r, b;
	cin >> n >> r >> b;

	int div = r/b;
	int extra = r%b;

	if(b==1){
		div = r/2;
	}

	string str = "";
	for(int i=1; i<=b; i++){
		for(int i=0; i<div;i++){
			str.push_back('R');
		}
		str.push_back('B');
	}
	int final = n-div-1;
	if(b==1) while(final--) str.push_back('R');
	else while(extra--) str.push_back('R');
	cout << str << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
