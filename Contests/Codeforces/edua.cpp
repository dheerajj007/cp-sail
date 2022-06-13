#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, m;
	cin >> n >> m;
	int sum=0;
	while(n--){
		int x;
		cin >> x;
		sum += x;
	}
	
	int result = sum -m;
	if(result<0)
		cout << "0";
	else
		cout << result;
	
	cout << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}