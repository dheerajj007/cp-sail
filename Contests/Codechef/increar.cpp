#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	ll a, b;
	cin >> a >> b;

	int count =0;
	while(a!=b){
		if(a+2<b){
			count += b-a%2;
		}
		else if (a>b+1){
			count += a-b;
		}
		else if(a<b){
			count++;
				a+=1;
		}
		else if (b>a){
				b+=2;
				count++;
		}
			
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
