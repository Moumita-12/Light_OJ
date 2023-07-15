#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Ax, Ay, Bx, By, Cx, Cy ,Dx,Dy,i,t,area,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
             cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
             Dx=Cx+Ax-Bx;
             Dy=Cy+Ay-By;
          area=0.5*abs(((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax)));
          cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<area <<endl;
    }
}

