#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    cin>>n;
    int p,a;
    //vector<int>v;
    cin>>p;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a<p)
            c++;
    }
    cout<<c<<endl;
}

