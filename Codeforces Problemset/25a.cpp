#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];

	int fEven, fOdd, tEven=0, tOdd=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			tEven++;
			fEven=i;
		}
		else{
			tOdd++;
			fOdd = i;
		}
	}
	if(tEven <   tOdd)
		cout << fEven+1;
	else
		cout << fOdd+1;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
