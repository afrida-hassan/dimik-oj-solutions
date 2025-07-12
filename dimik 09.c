#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    int x;
    int M;
    scanf("%d",&x);
    for(i=1;i<=T;i++)
    {
    M = sqrt(x);//25=sqrt5
    if(M * M == x)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
}
