#include<stdio.h>
#include<math.h>
int main()
{
         int t,s,x,y,n,i;
        scanf("%d",&t);
        for(i=1;i<=t;i++){
                 scanf("%d",&n);

                 s=ceil(sqrt((double)(n)));
                 //printf("%d\n",s);
                 if(s*s-n<s) {
                           x=s,y=s*s-n+1;
                            printf("Case %d: %d %d",i,y,x);
                           //printf("%d %d",s*s-n+1,s);
                             }
                  else  {
                            y=s,x=s*s-n-1;
                    printf("Case %d: %d %d",i,y,x);
                   //printf("%d %d",s,s*s-n-1);
                  }
         }
}



