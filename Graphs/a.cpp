#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, t;
    cin >> n >> t;
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    
    ll curr = 1;
    do{
        curr = curr + a[curr-1];
        if(curr == t){
            cout << "YES";
            return 0;
        }
        
    }while(curr < n);
    cout << "NO";
    return 0;
}
