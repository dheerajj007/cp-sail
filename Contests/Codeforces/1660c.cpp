#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	string a;
	cin >> a;
	int count =0;
	int f[26]={0};

	for(int i=0; i<a.length()-1; i+=2){
		if(a[i]!=a[i+1])
			count++;
	}
	for(char i:a){
		f[i-'a']++;
	}

cout << count << endl;
	count = a.length()-count;
	int sum =0;
	for(int i=0; i<26; i++){
		if(f[i]%2==1) f[i]--;
		sum += f[i];
	}
	count = sum- count;



	//cout << count << endl;


	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}
