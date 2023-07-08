#include<bits/stdc++.h>
using namespace std;
vector<pair<string,int> >p;
map<string,int>m;
bool sortByVal(const pair<string, int> &a, const pair<string, int> &b) 
{ 
    return (a.second < b.second); 
} 
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        m[s]++;
    }
    for(auto x:m)
    {
        p.push_back(make_pair(x.first,x.second));
    }
    sort(p.begin(),p.end(),sortByVal);
    cout<<p[p.size()-1].first<<endl;
}