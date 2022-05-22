#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n; 
	cin >> n;
	int h[n], a[n];
	for(int i=0; i<n; i++){
		cin >> h[i];
		cin >> a[i];
	}

	int count =0; 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j!=i){
				if(h[i] == a[j]) 
					count++;
			}
		}
	}
	cout << count;

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
