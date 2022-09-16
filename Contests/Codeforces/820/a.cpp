#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	ll a, b, c;
	cin>>a>>b>>c;
	ll time1 = a-1;
	ll time2=0;
	if(b>c)
		time2 = b-1;
	else
		time2 =(c-b)+(c-1);

	if(time1==time2)
		cout<<"3";
	else if(time1<time2)
		cout<<"1";
	else
		cout<<"2";
	cout<<endl;

	
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


