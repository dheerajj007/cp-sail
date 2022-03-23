#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long


vector<ll> a;

void solve(){
	ll n;
	cin >> n;
	
	ll sum =0;
	for(int i=1; i<a.size(); i++){
		if(n > a[i-1] and n < a[i]){
			sum += n-a[i-1]-2;
		}
		else {
			sum += a[i-1]-a[i]-2;
		}
		
	}
	cout << sum << endl;
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
	int d = 30;
	a.push_back(1);
	while(d--){
		a.push_back(a.back()+a.back()+1);
	}
	
	for(int i:a) cout << i << " ";
	
 
	while(tc--) solve();
	return 0;
}