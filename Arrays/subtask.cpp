#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	int i= n;
	int totalcases = 0;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	int first =0, total =0;
	for(int i:a){
		if(i){
			first++;
			++total;
			
		}
		else{
			break;
		}
	}
	if(total==n){
		cout << "100";
	} else if(first>=m){
		cout << k;
	}else{
		cout << "0";
	}
	
	cout << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}