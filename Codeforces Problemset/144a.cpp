#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	int min_element = 0;
	for(int i=0; i<n; i++){
		if(a[i] <= a[min_element]) 
			min_element = i;
	}
	int final = n- min_element-1;
	for(int i=min_element; i<n-1; i++){
		a[i] = a[i+1];

	}
	a[n-1] = -1;

	int max_element = 0;
	for(int i=0; i<n; i++){
		if(a[i] > a[max_element])
			max_element = i;
	}
	final += max_element;
	cout << final;

	return 0;
}
