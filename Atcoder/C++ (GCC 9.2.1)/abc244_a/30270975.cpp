#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0,t=0;
    //string p[]={"+x","-y","-x","+y"};
    for(int i=0;i<n;i++)
    {
        if(s[i]=='S')
        {
            if(t==0)
                x++;
            else if(t==1)
                y--;
            else if(t==2)
                x--;
            else 
                y++;
        }
        if(s[i]=='R')
        {
            t++;
            if(t>3)
                t=0;

        }
    }
    cout<<x<<" "<<y<<endl;
}