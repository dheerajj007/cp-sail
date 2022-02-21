#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

const auto MOD = 1000000007;
const auto INF = (int)1e9;
const auto EPS = 1e-9;
const auto PI = 3.1415926535897932384626433832795;
 
using PII = pair<int, int>;
using VI = vector<int>;
using VLL = vector<long long>;
using VS = vector<string>;
using VII = vector<PII>;
using VVI = vector<VI>;
using MPII = map<int,int>;
using SETI = set<int>;  	
using MSETI = multiset<int>; 
using int64 = long long int;
using unint64 = unsigned long long int;

 
void solve() {
	int n; cin>>n;
	int a[n]; for(int i=0; i<n; i++) cin>>a[i];
	
	sort(a, a+n);
	
	if(n==2) cout<<a[0]<<" "<<a[1];
	else{
		int mn = INT_MAX, pos = -1;
		for(int i=1; i<n; i++){
			
			if(mn > abs(a[i]-a[i-1])){
				mn = abs(a[i]-a[i-1]);
				pos = i;
			}
			
		}
		
		for(int i=pos; i<n;i++) cout<<a[i]<<" ";
		for(int i=0; i<pos; i++) cout<<a[i]<<" ";
	}
	cout<<"\n";
}
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	int tc=1;
	cin>>tc;
 
	while(tc--){
		solve();
	}
	return 0;
}
