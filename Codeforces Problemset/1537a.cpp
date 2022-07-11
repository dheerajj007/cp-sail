#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	int a[n];
	int sum =0;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		sum += x;
	}
	if(sum==n) cout << "0\n";
	else if(sum>n){
		cout << sum - n << endl;
	}
	else{
		cout << "1\n";
	}

}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}


