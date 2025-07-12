#include<stdio.h>
int main()
{
    int T,i,j;
    int N;
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
    scanf("%d",&N);
    int count=0;
    int k;
    for(k=5;k<=N;k=k*5)
    {
        count = count+N/k;

    }
    printf("%d\n",count);

}
}
