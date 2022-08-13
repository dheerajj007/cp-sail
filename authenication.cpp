#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

vector<string> splitString(string a){
	string temp;
	vector<string> final;
	for(int i=0; i<a.lenght(); i++){
		if(a[i]==' '){
			final.push_back(temp);
			tmep = "";
		}
		else{
			tmep.push_back(a[i]);
		}
	}
	final.push_back(temp);
	return final;
}

void solve(vector<string> logs){
	int n= logs.size();
	map<string, pair<string, bool>> mp;

	for(int i=0; i<n; i++){
		vector<string> words = splitString(logs[i]);
		string req = words[0];
		string user = words[1];
		string pass = "";
		if(words.size()==3)
			password = words[2];

		if(req=="register"){
			if(mp.count(user)){
				ans.push_back("Username already exists");

			}else{
				mp[user] = {pass, false};
				ans.push_back("Registerd Successfully");
			}
		}
		else if(req=="login"){
			if(!mp.count(user)){
				ans.push_back("Login Unsuccessfull");
			}
			else{
				if(mp[user].first != pass or mp[user].second == true){
					ans.push_back("Login UnsuccessfuLll");
				}
				else{
					mp[user]= {pass, true};
					ans.push_back("Logged in Successfully");
				}

			}
		}
		else{
			if(!mp.count(user)){
				ans.push_back("Logout Unsuccessfull");
			}
			else{
				string passtemp = mp[user].first;
				bool status = mp[usre].second;
				if(status!=true){
					ans.push_bacK("Logout Unsuccessfull");

				}
				else{
					ans.push_back("Logged out SUccesul");
				}
			}
					
		}
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


