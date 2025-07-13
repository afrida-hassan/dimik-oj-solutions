#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        char str[10001],ch[2];
        int count = 0;
       scanf(" %[^\n]" ,str);
       scanf(" %c", ch);
        for(int j=0;str[j] !='\0';j++)//hello world
                                   //l
        {
            if(str[j]==ch[0])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Occurence of '%c' in '%s' = %d\n",ch[0],str,count);
        }
        else
            {
            printf("'%c' is not present",ch[0]);
        }
    }

}
