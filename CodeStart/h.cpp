#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long


void solve(){
	int m, n;
	cin >> m >> n;
	vector<string> vec(m);
	
	for(int i=0; i<m; i++){
		cin >> vec[i];
	}


	//mapping all strings together to their alphabetical sorted string
	map<string,vector<string>> store;
    for (int i = 0; i < vec.size(); i++){
        string temp(vec[i]);
        sort(temp.begin(),temp.end());
   
        store[temp].push_back(vec[i]);
       
    }
    
    for(string s:vec){
    	sort(s.begin(), s.end());
    	if(store.count(s)){
    		vector<string> temp_vec(store[s]);
	        int size = temp_vec.size();
	       
	        for (int i = 0; i < size; i++)
	        	cout << temp_vec[i] << " ";
	           
	        cout << "\n";
	        store.erase(s);
    	}
    }
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}