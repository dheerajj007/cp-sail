#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];

	int maxpos = max_element(v.begin(), v.end()) - v.begin();
	int minpos = min_element(v.begin(), v.end()) - v.begin();

	cout <<  min({
			max(maxpos, minpos)+1, 
			(n-1) - min(maxpos, minpos)+1,
			(n-1) - maxpos + minpos +2, 
			(n-1) - minpos + maxpos +2
			}) << endl;


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


