#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
	int n, q;
	cin >> n >> q;
	
	deque<int> dq;
	vector<pair<int, int>> qr;
	vector<int> winners;
	int arr[n];
	
	int index=0, mxy=INT_MIN;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i]>mxy){
		    index =i;
		    mxy = arr[i];
		}
	}
	
	index++;

	for(int i=0; i<n; i++){
		int x = arr[i];
		dq.push_back(x);
	}

	for(int i=0; i<q; i++){
		int x, y;
		cin >> x >> y;
		qr.push_back({x, y});
	}
	
	
	for(int l=0;l<=n*index;l++){
		int a = dq.front();
		dq.pop_front();
		int b = dq.front();
		dq.pop_front();

		int c = max(a, b);
		int d = min(a,b);
		dq.push_front(c);
		dq.push_back(d);
		winners.push_back(c);
	}

	for(int i=0; i<q; i++){
		int j = qr[i].first;
		int final = 0;
		int rounds = qr[i].second;
		
		int k;
		
		
		int person = arr[j-1];
		
		int final2=0;
		for(k=0;k<index-1; k++)
		    if(winners[k]==person) final++;
		    
		for(; k<index+n-1; k++)
		    if(winners[k]==person) final2++;
		    
		
		int ml = (rounds-index-1)/(n-1);
		
		
		


		cout << final+final2 << endl;



	}


	
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


