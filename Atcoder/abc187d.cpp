#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

const ll MOD = 1e9 + 7;

void solve(){
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        int total = 0;
        for(int i=0; i<n; i++){
                int x , y;
                cin >> x >> y;
                arr[i] = {x, y};
                total += x;
        }
        int win = total%2 ? (total/2)+1 : total/2;
        
        sort(arr.begin(), arr.end());
        
        int i;
        int sum =0;
        for(i=n-1; i>=0; --i){
            sum += arr[i].first + arr[i].second;
            total -= arr[i].first;
            if(sum>total)
                break;
        }
        
        cout <<  n- i;


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

