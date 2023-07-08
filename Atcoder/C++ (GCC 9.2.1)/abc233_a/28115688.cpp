#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x<=y)
    {
        int d=y-x;
        if(d%10!=0)
            cout<<(d/10)+1<<endl;
        else
            cout<<(d/10)<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}