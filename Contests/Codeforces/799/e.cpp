#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
int n, s;
int N = 10000;

int fun(int a[], int i, int j, int sum, vector<int>& dp){
	if(i==n or j<0) return 0;
	if(sum==s){
		return 1;
		
	}
	if(s> sum)
		return INT_MAX;
	// if(dp[i][j][sum]!=-1) return dp[i][j];
	if(dp[sum]!=-1) return dp[sum];
	int p1 = fun(a, i+1, j, sum-a[i], dp)+1;
	int p2 = fun(a, i, j-1, sum-a[j], dp)+1;
	
	return dp[sum] = min(p1, p2);
	
}

void solve(){
	cin >> n >> s;
	int a[n];
	int sum =0;
	
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		sum+=x;
		a[i] = x;
		
	}
	
	if(sum==s){
		cout << "0" << endl;
		return;
	} 
	if(s> sum){
		cout << "-1" << endl;
		return;
	}
	vector<int> dp(N+1, -1);
	cout << fun(a, 0, n-1, sum, dp)-1 << endl;
	
	
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}