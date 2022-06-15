#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long 
int n;
long long m;

bool isokay(ll height, ll h[]){
	ll totalwood = 0;
	
	for(int i=0; i<n; i++){
		if(h[i]>height){
			totalwood+= h[i]-height;
		}
	}
	if(totalwood>=m) return true;
	else return false;
	
}

void solve(){
	cin >> n >> m;
	ll h[n];
	
	ll maxh = INT_MIN;
	for(int i=0; i<n; i++){
		cin >> h[i];
		maxh = max(h[i], maxh);
	}
	//binary search on h
	ll start = 0, end = 1e9;
	
	while(end - start > 1){
		ll m = start + (end-start)/2;
		if(isokay(m, h)){
			start = m;
		} else{
			end = m-1;
		}
	}
	if(isokay(end, h)){
	    cout << end << endl;
	} else 
	cout << start << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}