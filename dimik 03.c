#include<stdio.h>
int main()
{
    int i;
    int count = 0;
    for( i = 1000; i >= 1; i--)
    {
        printf("%d\t", i);
        count++;

    if(count%5==0)
    {
        printf("\n");
    }

    }
}
