#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll c;
int main()
{
    string s,k="oxx";
    cin>>s;
    ll x=s.size();
    for(int i=1;i<=400;i++)
    {
        k+="oxx";
    }
    for(int i=0;i<=k.size()-x;i++)
    {
        if(k.substr(i,x)==s)
        {
            c=1;
            cout<<"Yes"<<endl;
            break;
        }
    }
    if(c==0)
        cout<<"No"<<endl;
}