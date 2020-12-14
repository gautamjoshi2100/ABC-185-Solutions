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
int n,m;
int a[1005],b[1005];
int dp[1005][1005];
void init()
{
    forn(i,1005)
    {
        forn(j,1005)dp[i][j]=-1;
    }
}
int go(int x,int y)
{
    if(x==n or y==m)return (n+m)-(x+y);
    int &z=dp[x][y];
    if(z!=-1)return z;
    int ans=1e9;
    if(a[x]==b[y])ans=min(ans,go(x+1,y+1));
    else ans=min(ans,go(x+1,y+1)+1);

    ans=min(ans,min(go(x+1,y),go(x,y+1))+1);
    return z=ans;

}
void solve()
{
    init();
    cin>>n>>m;
    forn(i,n)cin>>a[i];
    forn(i,m)cin>>b[i];
    cout<<go(0,0)<<endl;
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