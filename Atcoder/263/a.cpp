#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n= 5;
	int x;
	int a[14] = {0};
	while(n--){
		cin >> x;
		a[x]++;
	}

	vector<int> arr;
	for(int i=0; i<14;i++){
		if(a[i]>0)
			arr.push_back(a[i]);
	}

	if(arr.size()==2){
		if(arr[0]==2 or arr[0]==3)
			cout << "Yes";
		else
			cout << "No";
	}
	else{
		cout <<"No";
	}



	
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


