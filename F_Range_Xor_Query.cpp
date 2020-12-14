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
const int N = 3*1e5+10;  
int n;  
int t[2*N];

void build() {  
  for (int i=n-1;i>0;--i)t[i]=t[i<<1]^t[i<<1|1];
}

void modify(int p,int value) {  
  for(t[p+=n]^=value;p>1;p>>=1)t[p>>1]=t[p]^t[p^1];
}

int query(int l, int r) {  
  int res=0;
  for(l+=n,r+=n;l<r;l>>=1,r>>=1) {
    if(l&1)res^=t[l++];
    if(r&1)res^=t[--r];
  }
  return res;
}
void solve()
{
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t[i+n];
    }
    build();
    while(k--)
    {
        int qt;
        cin>>qt;
        if(qt==1)
        {
            int x,v;
            cin>>x>>v;
            x--;
            modify(x,v);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            l--;
            cout<<query(l,r)<<endl;
        }
        
    }
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