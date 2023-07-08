#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0),cout.tie(0);
    ll i;
    cin>>i;
    ll k=0,c=pow(2,0);
    while(1)
    {
        if(c>i)
            break;
        k++;
        c=pow(2,k);
    }
    cout<<k-1<<endl;
}
