#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

int n;

bool backtrack(int sum){
	if(sum==n){
		return true;
		
	} else if(sum>n){
		return false;
		
	}
	bool p1=true, p2=true;
	if(n-sum>2021)
		p1 = backtrack(sum+2021);
	if(n-sum>2020)
		p2 = backtrack(sum+2020);
	
	return p1 or p2;
	
}

void solve(){
	cin >> n;
	if(backtrack(0))
		cout << "YES";
	else 
		cout << "NO";
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}