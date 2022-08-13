#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

int f(int n, vector<int> &dp){
    
	if(n<=0) 
		return 0;
		
	if(dp[n]!=-1) return dp[n];

	int temp = n;
	vector<int> a;

	while(temp){
	    if(temp%10!=0)
		    a.push_back(temp%10);
		temp/=10;
	}

	int ans = 1e9;
	for(int i=0; i<a.size(); i++){
	    
		ans = min(ans, f(n-a[i], dp)+1);
	}


	return dp[n] = ans;



}

void solve(){
	int n;
	cin >> n;
	vector<int> dp(n+1, -1);


	cout << f(n, dp);







	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
	
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
    	}
 
	return 0;
}


