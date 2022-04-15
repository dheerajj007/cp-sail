#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

ll factorial(int n) {
    ll factorial = 1;
    for (ll i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

ll nCr(int n, int r) {

    return factorial(n) / (factorial(r) * factorial(n - r));
}

void solve(){
	ll n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	//ll count =0;
	ll pos=0, neg = 0;

	for(ll i=0; i<n; i++){
		if(a[i] > 0) pos++;
		if(a[i] < 0) neg++;
	}

	ll final1 = nCr(pos, 2);
	ll final2 = nCr(neg, 2);
	cout << final1 + final2 << endl;



	//for(int i=0; i<n; i++){
	//	for(int j=i+1; j<n; j++){
	//		if(a[i]*a[j]>0) ++count;
	//	}
	//}
	//cout << count << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
