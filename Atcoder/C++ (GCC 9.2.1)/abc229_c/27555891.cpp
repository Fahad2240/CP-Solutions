#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll n,w,x,y;
    cin>>n>>w;
    vector<pair<ll,ll>>p;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p.push_back(make_pair(x,y));
    }
    sort(p.rbegin(),p.rend());
    ll t=w,sum=0;
    for(int i=0;i<n;i++)
    {
        if(p[i].second<=t)
        {
            sum+=p[i].first*p[i].second;
        }
        else
        {
                sum+=p[i].first*t;
                break;
        }
        t=t-p[i].second;
    }
    cout<<sum<<endl;
}