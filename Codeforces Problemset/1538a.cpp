#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n;
	cin >> n;

	int a[n];
	int y, z;
	int minpos=INT_MAX, maxpos=INT_MIN;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a[i] = x;
		if(minpos>x){
			minpos = x;
			y = i;
		}
		if(maxpos<x){
			maxpos = x;
			z = i;
		}
	
	}
	cout << y << " " << z << endl;
	

	
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


