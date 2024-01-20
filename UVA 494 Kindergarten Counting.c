#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag,count;
    char ar[100000];
    while(gets(ar)!=NULL)
    {
        count=0;
        for(i=0;ar[i]!='\0';i++)
        {
            if((ar[i]>='a'&&ar[i]<='z')||(ar[i]>='A'&&ar[i]<='Z'))
            {
                flag=1;
            }
            else
            {
                if(flag==1)
                {
                    count++;
                    flag=0;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
