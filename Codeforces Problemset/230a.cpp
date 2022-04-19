#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve(){
	int s, n;
	cin >> s >> n;
	vector<pair<int, int>> a(n);
	sort(a.begin(), a.end());
	
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		a[i] = {x, y};
	}

	for(auto i:a){
		cout << i.first << "  "  << i.second << endl;
		if(i.first < s){
			s += i.second;

		}
		else{
			cout << "NO";
			return;

		}
	}
	cout << "YES";
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
