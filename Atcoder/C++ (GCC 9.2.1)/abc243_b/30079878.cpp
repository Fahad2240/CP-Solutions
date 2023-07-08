#include<bits/stdc++.h>
using namespace std;
int main()
{
  int v,a,b,c;
  cin>>v>>a>>b>>c;
  if(a>v)
    cout<<"F"<<endl;
  else if(a<=v && a+b>v)
    cout<<"M"<<endl;
  else if(a<=v && a+b<=v && a+b+c>v)
    cout<<"T"<<endl;
  else
  {
      int d=v%(a+b+c);
      if(a>d)
        cout<<"F"<<endl;
      else if(a<=d && a+b>d)
        cout<<"M"<<endl;
      else if(a<=d && a+b<=d && a+b+c>d)
        cout<<"T"<<endl;
      else
      {
          
      }
  }
    
}