#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string a, ans;
	cin >> a;
	
	bool f;
	
	for(int i=0; i<a.length(); i++){
		if(a.substr(i, 3)=="WUB"){
			i+=2;
			if(f){
				ans.push_back(' ');
				f=0;
			}
		}
		else{
			ans.push_back(a[i]);
			f=1;
		}
	}
	
	cout << ans;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}