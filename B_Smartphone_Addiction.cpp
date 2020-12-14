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
    int n,m,t;
    cin>>n>>m>>t;
    int cap=n;
    int a,b;
    int las=0;
    forn(i,m)
    {
        cin>>a>>b;
        n-=abs(a-las);
        las=b;
        n=max(0,n);
       // cerr<<n<<endl;
        if(n==0)
        {
            cout<<"No"<<endl;
            return;
        }
        n+=(b-a);
        n=min(n,cap);
    }
    //cerr<<t<<" "<<b<<" "<<n<<endl;
    n-=(t-b);
    n=max(n,0);
    //cerr<<n<<endl;
    if(n==0)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
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