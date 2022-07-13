#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	vector<int> a;
	int k;
	cin >> k;

	int i = 1;
	while(a.size()!=1001){
		if(i%3==0 or i%10==3){
			i++;
			continue;
		}
		a.push_back(i);
		i++;
	}
	cout << a[k-1];

	cout << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}


