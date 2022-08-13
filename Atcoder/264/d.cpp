#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	string a;
	cin >> a;
	string b = "atcoder";

	int count =0;
	for(int i=0; i<b.length(); i++){
		if(a[i]==b[i])
			continue;
		else{
			int j=0; 
			for(j=0; j<a.length(); j++){
				if(a[j]==b[i])
					break;

			}
			while(j!=i){
				count++;
				swap(a[j], a[j-1]);
				j--;
			}

		}
	}
	cout << count;

	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
	
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
    	}
 
	return 0;
}


