#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n, s;
	int maxdiff = INT_MIN;
	int l = 0, h = n;
	cin >> n >> s;

	while(l<h){
		if(l+h==s){
			int diff = abs(h-l);
			maxdiff = max(diff, maxdiff);
		}
		else if(l+h>s){
			h--;
		}
		else{
			l++;
		}
	}

	cout << maxdiff << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}


