#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int a[n], b[n];
	stack<int> s;
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int k=0;
			while(a[i]!=b[k]){
				s.push(b[k]);
				k++;
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