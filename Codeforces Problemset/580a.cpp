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
	int n;
	cin >> n;
	int x, temp=0, counter = 1, mx = 0;
	
	for(int i=0; i<n; i++){
		cin >> x;
		if(i!=0){
			if(x>=temp) ++counter;
			else counter = 1;
		}
		mx = max(mx, counter);
		temp = x;
	}
	cout << mx;
 
}
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	int tc=1;
	//cin>>tc;
 
	while(tc--){
		solve();
	}
	return 0;
}
