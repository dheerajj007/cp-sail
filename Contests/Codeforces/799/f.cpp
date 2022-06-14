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
	
	vector<pair<int,int>> ans;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int x = a[i]%10;
			int y = a[j]%10;
			if((x==9 and y==4) or (x==2 and y==1) or (x==3 and y==0)){
				ans.push_back({i,j});
			}
			
		}
	}
	bool flag = false;
	for(auto j:ans){
		for(int i=0; i<n; i++){
			int x = a[i]%10;
			if(j.first!=i and j.second!=i and x==0){
				cout << j.first << " " << j.second << " " << i << endl;
				flag = true;
				// return;
				break;
				
			}
		}
		// cout << i.first << " " << i.second << endl;
	}
	if(flag) cout << "YES";
	else cout << "NO";
	cout << endl;
}

 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}