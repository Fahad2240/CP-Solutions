#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>s>>n;
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    while(n>1)
    {
        next_permutation(s.begin(),s.end());
        //cout<<s<<endl;
        n--;
    }
    cout<<s<<endl;
}
