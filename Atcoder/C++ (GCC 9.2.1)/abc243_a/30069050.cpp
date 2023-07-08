#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    vector<ll> v(2*n);                  
    vector<ll>::iterator it;
    //multiset<ll>s,p;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //s.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        //p.insert(b[i]);
    }
    ll c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
            c++;
    }
    cout<<c<<endl;
    sort(a,a+n);
    sort(b,b+n);
    it=set_intersection (a, a+n, b, b+n, v.begin());
    v.resize(it-v.begin());
    ll d=0; 
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }*/
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i]==a[j])
                d++;
        }
    }
    
    cout<<d-c<<endl;
}