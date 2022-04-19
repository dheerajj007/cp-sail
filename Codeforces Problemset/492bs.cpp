#include<bits/stdc++.h>

using namespace std;
#define ll long long int



// ---------- * jai mata di ** ------------   //


#define lop(i,a,b,c) for(int i=a;i<b;i+=c)
#define rlop(i,a,b,c) for(int i=a-1;i>=b;i-=c)
#define f(i,n) lop(i,0,n,1)
#define rf(i,n) rlop(i,n,0,1)
#define all(x) x.begin(),x.end()
#define pb push_back
// typedef vector<ll> v;
typedef map<ll ,ll> m;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll,ll>> vii;
const int intmax = LONG_MAX;
const int intmin = LONG_MIN;


ll n , l;
string s;

vector<ll> v;

bool check(ll mid)
{
    ll start=v[0]-mid , last=0;
    for (int i = 0; i < n; i++)
    {
        if(i==0)
        {
            if(v[i]>mid)
            return false;
            last=v[i]+mid;
        }
        else
        {
            if(v[i]-mid>last)
            return false;
            else{
                last=v[i]+mid;
            }
        }
    }
    if(last<l)
    {
        return false;
    }
    return true;
    
}
bool check2(double mid)
{
    double start=v[0]-mid , last=0;
    for (int i = 0; i < n; i++)
    {
        if(i==0)
        {
            if(v[i]>mid)
            return false;
            last=v[i]+mid;
        }
        else
        {
            if(v[i]-mid>last)
            return false;
            else{
                last=v[i]+mid;
            }
        }
    }
    if(last<l)
    {
        return false;
    }
    return true;
    
}

void solve()
{
    cin>>n>>l;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    
sort(all(v));

ll hi=l , lo=0 , mid;
while(hi-lo>1)
{
    mid=(hi+lo)/2;
    if(check(mid))
    hi=mid;
    else
    lo=mid;
}
double h=hi , l=lo , m;
double eps=1e-5;
while(h-l>eps)
{
    m=(h+l)/2;
    if(check2(m))
    h=m;
    else
    l=m;
}
cout<<fixed<<setprecision(11)<<h<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int t; cin>>t;while(t--)
    solve();
    return 0;
}


