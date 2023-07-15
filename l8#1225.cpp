#include<bits/stdc++.h>
using namespace std;
int main()
{
         int t,i;
         cin>>t;
         for(i=1;i<=t;i++){
         string a;
         cin>>a;
         int ln=a.length();
       string b=a;
      reverse(b.begin(),b.end());
         if(a==b) cout<<"Case "<<i<<": Yes"<<endl;
         else cout<<"Case "<<i<<": No"<<endl;
         }

}
