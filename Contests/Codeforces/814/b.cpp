#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> a, b, notdiv;
	
	for(int i=1; i<=n; i++){
		if(i%4==0)
		    b.push_back(i);
		
		else if((i+k)%4==0)
			a.push_back(i);
		
		else
		    notdiv.push_back(i);
	
	}
	
	int sum = a.size()+b.size();
	
	if(sum == n/2){
		cout << "YES" << endl;
		
		int j =0;
		int m = notdiv.size();
		
		for(int i=0; i<a.size(); i++){
		    if(j<m)
			{cout << a[i] << " " << notdiv[j] << endl;
			j++;}
		}
		
		for(int i=0; i<b.size(); i++){
		    if(j<m)
		    {cout << notdiv[j] << " " << b[i] << endl;
		    j++;}
		}
	}
	else 
		cout << "NO" << endl;


	
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


