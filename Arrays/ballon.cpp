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
	
	vector<pair<int, int>> p;
	
	for(int i=0; i<n; i++){
		if(a[i]<=7 and a[i]>0)
			p.push_back({i+1, a[i]});
	}
	
	sort(p.begin(), p.end());
	
	cout << p[6].first << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}	