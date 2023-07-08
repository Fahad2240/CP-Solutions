#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll m,x;
vector<vector<ll> >v;
ll ans=0;
void solve(ll p,ll x)
{
    //cout<<x<<endl;
    if(p==m)
    {
        if(x==1)
            ans++;
        //cout<<ans<<endl;
        return;
    }
    for(auto g:v[p])
    {
        //cout<<g<<" "<<x<<endl;
        if(x%g!=0)
            continue;
        solve(p+1,x/g);
    }
}
int main()
{   
    int n;
    cin>>n>>x;
    m=n;
    while(n--)
    {
        ll d,b;
        cin>>d;
        vector<ll>m;
        for(int i=0;i<d;i++)
        {
            cin>>b;
            m.push_back(b);
        }
        v.push_back(m);
            
    }
    //cout<<ans<<endl;
    solve(0,x);
    cout<<ans<<endl;
}