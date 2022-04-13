#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

template <typename T>
class vector{
	T data;
	
	
	
	
};


void solve(){
	
	int n ;
	cin >> n;
	
	string b;
	
	for(char i: b){
		cout << i << " ";
	}
	
	
	b += "a";
	
	b.push_back("a");
	
	
	vector<int> a(n);
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int sum = 0;
	for(int i:a){
		sum += i;
	}

	cout << sum;
	
	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}