#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n = 8;
	char a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i=1; i<n-1; i++){
		for(int j=1; j<n-1; j++){
			if(a[i][j]=='#'){
				if(a[i+1][j+1]=='#' and a[i-1][j+1]=='#' and a[i-1][j-1]=='#' and a[i+1][j-1]=='#'){
					cout << i+1<< " " << j+1 << endl;
					return ;
				}
			}
			
		}
	}
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}