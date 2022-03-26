    #include <bits/stdc++.h>
    using namespace std;
     
    #define all(x) (x).begin(), (x).end()
    #define ll long long
     
    void solve(){
    	int M, N, a;
    	cin >> M >> N >> a;
    	if (N % a == 0)
        	N = N / a;
    
	    else
	        N = (N / a) + 1;
	    
	    if (M % a == 0) 
	        M = M / a;
	    
	    else 
	        M = (M / a) + 1;
	    
	 
	    cout <<  M * N << endl;
    }
     
    int main(){
    	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
    	
    	int tc=1;
    	cin>>tc;
     
    	while(tc--) solve();
    	return 0;
    }