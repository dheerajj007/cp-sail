#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int a[4];
	for(int i=0;i<4; i++)
		cin >> a[i];
	
	
	int final1 = a[0]>a[1] ? a[0] : a[1];
	int final2 = a[2]>a[3] ? a[2] : a[3];

	sort(a, a+4);

	unordered_set<int> s;
	s.insert(a[2]);
	s.insert(a[3]);

	if(s.count(final1) and s.count(final2))
		cout << "YES";
	else 
		cout << "NO";


	cout << endl;

	

	
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}


