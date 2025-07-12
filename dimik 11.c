#include<stdio.h>
int main()
{
    int T,i,j;
    int N;
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
    scanf("%d",&N);
    long long int ans = 1;
    for(j=1;j<=N;j++)
    {
        ans = ans*j;

    }
    printf("%lld\n",ans);
    }


}
