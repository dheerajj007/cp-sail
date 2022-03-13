#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(int n, int a, int b, int c){
	if(n>=1) {
	solve(n-1, a, c, b);
	cout << a << " " << b << endl;
	solve(n-1, c, b, a);
}
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
 int n; cin >> n;
	while(tc--) solve(n, 1, 2,3);
	return 0;
}