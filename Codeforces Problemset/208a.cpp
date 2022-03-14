#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string a;
	cin >> a;
	int pos = a.find("WUB");
	
	while(pos!=string::npos){
		a.erase(pos, 3);
		a.insert(pos, " ");
		pos = a.find("WUB");
	}
	// if(a[0]==' ')
	// a.erase(0, 1);

	// for(int i=1; i<a.length(); i++){
	// 	if(a[i]==' ' and a[i-1]==' '){
	// 		a.erase(i, 1);
	// 	}
		
		
	// }
	cout << a;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}