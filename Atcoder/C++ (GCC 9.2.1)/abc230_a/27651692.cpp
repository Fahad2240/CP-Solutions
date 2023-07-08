#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    ll n;
    cin>>s;
    ll x=s.size();
    cout<<"AGC";
    for(int i=1;i<=3-x;i++)
            cout<<"0";
    if(stoi(s)>=42)
    {
        cout<<stoi(s)+1<<endl;
    }
    else
        cout<<stoi(s)<<endl;
}
