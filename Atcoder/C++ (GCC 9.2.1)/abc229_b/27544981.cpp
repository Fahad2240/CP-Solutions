#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y,s,f;
    cin>>x>>y;
    if(x.size()>y.size())
    {
        s=x;
        f=y;
    }
    else
    {
        s=y;
        f=x;
    }
    int k=s.size()-f.size();
    int c=0;
    for(int i=s.size()-1,j=s.size()-k-1;j>=0;i--,j--)
    {
        int p=s[i]-48,q=f[j]-48;
        if(p+q>=10)
        {
            c=1;
            cout<<"Hard"<<endl;
            break;
        }
    }
    if(c==0)
        cout<<"Easy"<<endl;

}