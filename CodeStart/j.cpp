#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string n;
	cin >> n;
	int a[10]= {1, 3, 2, 2, 1, 2, 1, 3, 0, 1};
	
	int stick =0;
	if(n[0]=='1' or n[0]=='4' or n[0]=='7'){
			stick++;
		}
	for(int i=0; i<n.length()-1; i++){
		if(n[i+1]=='1' or n[i+1]=='4' or n[i+1]=='7'){
			stick++;
		}
		stick += a[n[i]-'0'];
		
	}
	cout << stick << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}