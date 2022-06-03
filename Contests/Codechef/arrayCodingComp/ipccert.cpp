#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	int eligibleStudents = 0;
	
	while(n--){
		int x;
		int totalminutes = 0;
		int q;
		for(int i=0; i<k; i++){
			cin >> x;
			totalminutes += x;
		}
		cin >> q;
		
		if(q<=10){
			if(totalminutes >=m){
				eligibleStudents++;
			}
			
		}
		
	}
	cout << eligibleStudents;
	
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}