#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int m, n, k;
	cin >> n >> m >> k;
	
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	int b[m];
	for(int i=0; i<m; i++)
		cin >> b[i];
	
	sort(a, a+n);
	sort(b, b+m);
	
	int i=0, j=0, count=0;
	
	while(i<n and j<m){
		if(a[i]-k>b[j]) j++;
		else if(a[i]+k<b[j]) i++;
		else{
			i++;
			j++;
			count++;
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