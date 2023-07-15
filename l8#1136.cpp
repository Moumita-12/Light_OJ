#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,t,c,d,x,y,z,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
             cin>>p>>b;
             x=(b/3)*2;
             a=p-1;
             y=(a/3)*2;
             if(b%3==2) x+=1;
             if(a%3==2)  y+=1;
             z=x-y;

                  cout<<"Case "<<i<<": "<<z<<endl;
    }
}
