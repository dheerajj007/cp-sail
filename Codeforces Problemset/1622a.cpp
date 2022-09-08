#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a+b+c;
	if(a==b or b==c or a==c){
		if(sum%2==0)
			cout << "YES";
		else
			cout << "NO";
	}
	else if(a+b==c or b+c==a or a+c==b){
		cout << "YES";

	}
	else
		cout << "NO";

	cout << endl;

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
	
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
    	}
 
	return 0;
}


