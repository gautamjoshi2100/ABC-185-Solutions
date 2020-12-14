#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(),a.end()
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forr(i,n) for(int i=int(n-1);i>=0;i--)
#define fora(i,a,b) for(int i=int(a);i<=int(b);i++)
#define forb(i,a,b) for(int i=int(a);i>=int(b);i--)
#define kickstart int t,o;cin>>o;for(t=1;t<=o;t++){cout<<"Case #"<<t<<": ";solve();}
#define mod 1000000007
using namespace std;
using ll=long long int;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<ll> vii;
typedef pair<ll ,ll> pii;

void solve()
{
    int n,k;
    cin>>n>>k;
    if(k==0)
    {
        cout<<1<<endl;
        return;
    }
    vi v;
    int arr[k];
    forn(i,k)cin>>arr[i];
    sort(arr,arr+k);
    ll ans=0;
    if(arr[0]!=1)v.pb(arr[0]-1);
    fora(i,1,k-1)  
    {
        if(arr[i]-arr[i-1]-1>0)v.pb(arr[i]-arr[i-1]-1);
    }
    if(v.size()==0)
    {
        cout<<0<<endl;
        return;
    }
   // for(auto i:v)cout<<i<<" ";
    //cout<<endl;
    if(arr[k-1]!=n)v.pb(n-arr[k-1]);
    int c=*min_element(all(v));
    //cout<<c<<endl;
    for(auto i:v)
    {
        ans+=i/c+(i%c!=0);
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
	solve();
    return 0;
}