#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    stack<int>v;
    cin>>a;
    int p=0;
    for(int i=0;i<3;i++)
    {
        int d=a[i]-'0'+p;
        for(int j=0;j<3;j++)
        {
            if(i==j)
                continue;
            int x=a[j]-'0';
            d+=x;
        }
      	if(d>=10)
        {
          p=d/10;
          d=d%10;
          //cout<<d<<" "<<p<<endl;
        }
        else
          p=0;
        v.push(d);
        //cout<<d<<endl;
    }
  	if(p!=0)
      v.push(p);
    while(!v.empty())
    {
      cout<<v.top();
      v.pop();
    }
}
