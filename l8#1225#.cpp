#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,rem,t,i,a;
    cin>>t;
   for(i=1;i<=t;i++){
    cin>>a;
    num=a;
    int rev=0;
    while(num>0){
        rem=num%10;//cout<<rem<<endl;
        rev=(rev*10)+rem;//cout<<rev<<endl;
        num=num/10;//cout<<temp<<endl;
    }
    if(a==rev) cout<<"Case "<<i<<": Yes"<<endl;
         else cout<<"Case "<<i<<": No"<<endl;
   }

}
