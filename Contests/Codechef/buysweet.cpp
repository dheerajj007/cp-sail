#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll n, r;
	cin >> n >> r;
	ll a[n], b[n];
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];

	vector<pair<int, int>> x(n);
	for(int i=0; i<n; i++){
		x[i] = {a[i], b[i]};
	}
	sort(x.begin(), x.end());

	int i = 0;
	int count =0;
	while(r ){
			if(x[i].first <= r)
			{
				r -= x[i].first;
				r += x[i].second;
				count++;
			}
			//if(x[i].first  > r)
			//	i++;

	}

	cout << count << endl;
}

 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
