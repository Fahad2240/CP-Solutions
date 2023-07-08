#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll p=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>=a[i])
        {
            p=a[i-1];
            break;
        }
    }
    if(p==0)
        p=a[n-1];
    cout<<p<<endl;
}
