#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
int arr[2001];

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
		
	for(int i=0; i<n; i++){
		arr[a[i]]++;
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]==0){
			cout << i;
			break;
		}
	}
		
		
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}