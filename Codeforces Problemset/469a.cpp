#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    set<int> a;
    
    int p;
    cin >> p;
    for(int i=0; i<p; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    
    if(a.size()==n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    
    
    
    return 0;
}