#include<stdio.h>
int main()
{
         long long int n,m,w,t,i;
         scanf("%lld",&t);
         for(i=1;i<=t;i++){
         scanf("%lld",&w);
         if(w%2!=0){
         printf("Case %lld: Impossible\n",i);
         continue;
         }
         else{
         n=w/2;
         m=2;
         while(n%2==0){
              n=n/2;
              m=m*2;
         }
                  printf("Case %lld: %lld %lld\n",i,n,m);
         }

         }


}
