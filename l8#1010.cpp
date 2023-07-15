#include<bits/stdc++.h>
using namespace std;
int main()
{
         long long c,i,n,m,b=0,k,a,t,j=0,y,x;
         cin>>t;
        while(t--)
     {
    cin>>m>>n;
    y=m*n;
    if(m==1 || n==1) x=max(m,n);
    else if(m==2 || n==2){

              x=max(m,n);
        if(x%4==1 || x%4==3) x++;
        else if(x%4==2) x+=2;
        }
 else if(y%2==1) x=y/2+1;
      else   x=y/2;

   cout << "Case " << ++j << ": "<<x<<endl;
    }

}

