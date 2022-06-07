#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

vector<int> dp(4005, -1);

int backtrack(int n, int a, int b , int c){
	if(n==0){
		return 0;
	} else if(n<0){
		return INT_MIN;
	}
	if(dp[n]!=-1) return dp[n];
	int p1 = backtrack(n-a, a, b, c);
	int p2 = backtrack(n-b, a, b, c);
	int p3 = backtrack(n-c, a, b, c);
	
	return dp[n] = 1+max(p1, max(p2, p3));
	
}

void solve(){
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	cout << backtrack(n, a, b, c);
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}