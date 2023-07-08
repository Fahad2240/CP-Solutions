#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int x=count(s1.begin(),s1.end(),'#')+count(s2.begin(),s2.end(),'#');
    if(x>0 && x==3)
    {
        cout<<"Yes"<<endl;
    }
    else if(x>0&&x==2)
    {
        if(((s1[0]=='#')&&(s1[1]=='#'))||((s1[0]=='#')&&(s2[0]=='#'))||((s2[0]=='#')&&(s2[1]=='#'))||((s1[1]=='#')&&(s2[1]=='#')))
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
    else if(x>0&&x==1)
        cout<<"Yes"<<endl;
    else if(x>0&&x==4)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}