#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string a;
	cin >> a;
	int n = a.length();

	if(n<3){
		cout << "1\n";
		return;
	}

	int i=0, j=2;
	int f[256] ={0};
	int cnt = 0;
	bool flag = false;
	for(int i=0;i<3; i++)
	       f[a[i]]++;

	int ans =0;
	while(i<n and j<n){
		string b = a.substr(i, j-i);
		for(int k= 0; k<256; k++)
			if(f[k]>0) cnt++;

		if(cnt==3) flag = true;

		if(flag){ 
			j++;
			f[a[j]]++;
		}
		else{
			i = j;
			j = i+3;
			fill(f,f+ 257, 0);
			ans++;

		}


		
	}
	cout << ans << endl;
			
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}


