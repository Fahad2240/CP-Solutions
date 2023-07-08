#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int t;
    cin>>n;
    if(n.size()<4)
     {
         t=4-n.size();
         for(int i=0;i<t;i++)
            n='0'+n;
     }
    cout<<n<<endl;
}

