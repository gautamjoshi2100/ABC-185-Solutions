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
ll dp[205][205];
void init()
{
    forn(i,205)forn(j,205)dp[i][j]=-1;
}
ll go(int n,int cnt)
{
    if(n<0)return 0;
    if(n==0)return (cnt==12);
    ll &x=dp[n][cnt];
    if(x!=-1)return x;
    ll ans=0;
    for(int i=1;i<=200;i++)
    {
        ans+=go(n-i,cnt+1);
    }    
    return x=ans;
}
void solve()
{
    init();
    int n;
    cin>>n;
    cout<<go(n,0);
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