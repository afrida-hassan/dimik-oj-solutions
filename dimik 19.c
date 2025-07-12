#include<stdio.h>
int main()
{
    int T,i,j;
    scanf("%d",&T);
    getchar();
    for(i=0;i<T;i++)
    {
        char S[10000];
        int count = 0;
        scanf("%[^\n]",S);
        getchar();
        for(j=0;S[j] != '\0';j++)
        {
            if(S[j] == ' ')
            {
               count++;
            }
        }

    printf("Count = %d\n",count+1);



}
}

