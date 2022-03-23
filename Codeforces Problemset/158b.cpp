#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n; 
	int a[n] ;	
	for(int i=0; i<n; i++) cin >> a[i];
		
	int res[4] = {0};

	for(int i:a) res[a[i]-1]++;
	
	int total = a[3];
		
	total += res[1]/2;	
	if(a[0] > a[2]){
		if(res[1]%2==1) a[0]--;
		total += a[2];
		a[0] -= a[2];
		total += a[0];
	}
	if(a[2] > a[0]){
		total += a[0];
		a[2] -= a[0];
		total += a[2];
	}
	
	cout << total;
	
		
	

}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}