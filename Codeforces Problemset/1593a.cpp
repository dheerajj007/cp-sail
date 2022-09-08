#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	ll a[3];
	ll high = INT_MIN;
	set<int> s;
	bool flag = false;

	for(int i=0; i<3; i++){
		cin >> a[i];
		high= max(a[i], high);
		s.insert(a[i]);
	}

	if(s.count(high)>1)
		flag = true;
	
	if(a[0]==0 and a[2]==0 and a[1]==0){
		cout << "1 1 1"<< endl;
		return ;
	}


	for(int i=0; i<3; i++){
		if(flag and a[i]==high){
			cout << "1";
		}
		else if(a[i]==high){
			cout << "0 ";
		} else {
			cout << high - a[i] +1 << " ";
		}
	}
	cout << endl;


	
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


