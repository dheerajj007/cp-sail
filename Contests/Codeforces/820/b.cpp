#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int m[]= {0, 'a','b', 'c','d','e', 'f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans;

	int i;
	for(i=n-1;i>=0; --i){
		if(s[i]=='0'){
			string a;
			a.push_back(s[i-2]);
			a.push_back(s[i-1]);
			int x = stoi(a);
			ans.push_back(m[x]);
			i-=2;
		} else{
			ans.push_back(m[s[i]-'0']);
		}
	}
	reverse(ans.begin(),ans.end());
	cout <<ans<<endl;


	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
	
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
    	}
 
	return 0;
}


