#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    a--;
    //b--;
    reverse(s.begin()+a,s.begin()+b);
    cout<<s<<endl;
}