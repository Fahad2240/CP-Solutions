#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
vector<ll>p;
vector<ll>::iterator m;
int main()
{
    ll n,q,c=0,x;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        p.push_back(x);
    }
    sort(p.begin(),p.end());
    for(int i=1;i<=q;i++)
    {
        cin>>x;
        ll m=lower_bound(p.begin(),p.end(),x)-p.begin();
        cout<<(n-m)<<endl;
    }

}