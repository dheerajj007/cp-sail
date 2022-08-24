#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	double sum =0.0;
	for(int i=0;i<n-1; i++)
		sum += a[i];

	double avg = sum/(n-1);
	//cout << sum  << endl;

	double final = a[n-1] + avg;
	cout << final << endl;



	
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


