#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int m=(a*c),n=(a*d),o=(b*c),p=(b*d);
    if(m>n && m>o && m>p)
        cout<<m<<endl;
    else if(n>m && n>o && n>p)
        cout<<n<<endl;
    else if(o>m && o>n && o>p)
        cout<<o<<endl;
    else
        cout<<p<<endl;
    return 0;
}
