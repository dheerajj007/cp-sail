#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

string str = "_abcdefghijklmnopqrstuvwxyz";
void solve(){
	int n, x;
	cin >> n >> x;
	
	string final;
	if(n==1 and x==1){
		cout << "z"<<endl;
		return;
	}
	else if(n==x){
		cout << "-1"<<endl;
		return;
	}
	int z = n/2;
	if(n%2)
		z++;
		
	if(x>z){
		cout << "-1"<<endl;
		return;
	}
	if(n%2==0){
		string ans;
		int na = z-x+1;
		int i;
		for(i=1; i<x; i++)
			ans.push_back(str[i]);
		
		while(na--){
			ans.push_back(str[i]);
		}
		
		final+=ans;
		reverse(ans.begin(), ans.end());
		final+=ans;

	} else{
		string ans;
		// int na = z-x+1;
		if(x==1){
		    while(n--){
		        cout << "a";
		    }
		    cout << endl;
		    return;
		}
		
		if(x%2){
		    int mid = z-x;
		    int i;
		    for(i=1; i<x; i++)
			    ans.push_back(str[i]);
			    
		
			while(mid--){
			    ans.push_back(str[i]);
			}
		    final+=ans;
		    final.push_back(str[i]);
		    
		    reverse(ans.begin(), ans.end());
		    final+=ans;

		    
		    
		} else{
		    
		    int mid = z-x;
		    int i;
		    for(i=1; i<x; i++)
			    ans.push_back(str[i]);
			    
			 while(mid--){
			    ans.push_back(str[i]);
			}
		    final+=ans;
		    final.push_back(str[i]);
		    
		    reverse(ans.begin(), ans.end());
		    final+=ans;
		}
// 		int i;
// 		for(i=1; i<z; i++)
// 			ans.push_back(str[i]);
		
		
// 		final+=ans;
// 		if(x<z)
// 			final.push_back(str[i-1]);
// 		else
// 			final.push_back(str[i]);
		
		
// 		reverse(ans.begin(), ans.end());
// 		final+=ans;
		
	}
	
	
		
	
	
	cout << final << endl;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}