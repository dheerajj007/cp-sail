#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, p, x, y;
	cin >> n >> p >> x >> y;
	
	int a[n];
	for(int i=0; i<n; i++) 
		cin >> a[i];
	
	int totalTime = 0;
	for(int i=0; i<p; i++){
		if(a[i]){
			totalTime += y;
			
		}
		else{
			totalTime += x;
		}
	}
	cout << totalTime << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}