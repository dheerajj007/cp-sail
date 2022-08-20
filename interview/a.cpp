#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;
void bubbleSort(int a[], int n){

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j+1] > a[j])
				swap(a[j], a[j+1]);
		}
	}
}

void solve(){
	string name;
	cin >> name;

	int a[256] = {0};
	for(char letter: name)
		a[letter-'a']++;

	cout << a[0];


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


