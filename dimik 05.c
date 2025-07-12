#include<stdio.h>
int main()
{
    int i,T,N,j;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
     scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
    for(j=1;j<=N;j++)
    {
    printf("*");
    }
    printf("\n");
    }
    if(t!=T)
    {

    printf("\n");
    }
    }
}


