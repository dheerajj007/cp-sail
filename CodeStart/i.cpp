#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

bool isPalindrome(string S){
    string P = S;
    reverse(P.begin(), P.end());
 
    if (S == P) 
        return 1;
    else 
        return 0;
}

void solve(){
	int n;
    cin >> n;
    string a[n];
    int maxi = 0;
    int flag = 0;
    map<string, int> m;
    
    //case 1: check every string if it is palindrome or not
    for(int i=0; i<n; i++){
        string x;
        cin >> x;
        a[i] = x;
        m[x]++;
        
        if(isPalindrome(x)){
            flag = 1;
            int y = x.length();
            maxi = max(maxi, y);
        }
    }
    
    //case 2: checking for possible pairs that may become palindrome
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            string c = a[i] + a[j];
            if(isPalindrome(c)){
                int y = c.length();
                maxi = max(maxi, y);
                if(m[a[i]]> 1 and m[a[j]]>1 and m[a[i]]==m[a[j]])
                    maxi *= m[a[i]];
            }
        }
    }
    
    //case3: 
    
    
    
    cout << maxi;
	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}