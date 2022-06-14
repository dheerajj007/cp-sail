#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	map<int, int> m;
	for(int i:a)
		m[i]++;
	int nod=0;
	
	for(auto i:m){
			if(i.second>1){
				nod+=i.second-1;
		}
		
	}
	
	if(nod%2){
		cout << n- (nod+1);
	} else{
		cout << n-nod;
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