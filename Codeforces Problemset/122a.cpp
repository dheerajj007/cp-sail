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

 
 vector<int> luckynumbers;
 
 void generate(){
 	int n = 1000;
 	string a;
 	bool flag = false;
 	for(int i=4; i<n; i++){
 		a = to_string(i);
 		for(auto ch:a){
 			if(ch=='4' or ch=='7') flag =true;
 			else {flag = false; break;}
 		}
 		if(flag) luckynumbers.push_back(i);
 	}
 	
 }
void solve() {
	int n; 
	cin >> n;
	generate();
	bool flag = false;
	
	for(int i:luckynumbers){
		if(i<=n){
			if(n%i==0) {flag = true;break;}
		}
		else break;
	}
	if(flag) cout << "YES";
	else cout << "NO";
	
	
 
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
