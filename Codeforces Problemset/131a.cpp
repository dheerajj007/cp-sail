#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string a;
	cin >> a;
	
	bool flag = true, flag2 = false;
	
	if(isupper(a[0])) flag2 = true;
	
	for(int i=1; i<a.length(); i++)
		if(islower(a[i])) {flag = false;break;}
	
	
	if(flag and flag2)
	    for(int i=0; i<a.length(); i++) a[i] +=32;
	
	else if(flag){
	    if(islower(a[0])) a[0] -= 32;
	
		for(int i=1; i<a.length(); i++) a[i] += 32;
	}
	cout << a ;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}