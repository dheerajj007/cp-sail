#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){

	int n, m;
	cin >> n >> m;

	int sum =0;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		sum += x;
	}

	cout << sum%m << endl;



	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin >> tc;
	int i=1;
 
	while(tc--){
		cout << "Case #" << i++ << ": ";
		solve();
	}
	return 0;
}


