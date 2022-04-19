#include <bits/stdc++.h>
using namespace std;

int n, c;

bool predicate(int d, int arr[]){
	int cntCows = 1;
	int lastPlacedCows = arr[0];
	
	for(int i=1; i<n; i++){
		if(arr[i] - lastPlacedCows >= d){
			cntCows++;
			lastPlacedCows = arr[i];
		}
	}
	if(cntCows >= c) return true;
	else return false;


}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> c;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];

		sort(a, a+n);
		int l = 1, h = a[n-1] - a[0];
		while(l < h){
			int m = l + (h-l)/2;
			if(predicate(m, a))
				l = m;
			else 
				h = m-1;

		}
		cout << l << endl;
	}
	return 0;
}
