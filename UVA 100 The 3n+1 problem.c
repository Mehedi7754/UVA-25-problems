#include<stdio.h>
int main()
{
    int a,b,m,count,cyclelength,tem;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%d %d ",a,b);
        if(a>b)
        {
            tem=b;
            b=a;
            a=tem;
        }
        cyclelength=0;
        while(a<=b)
        {
            count=1;
            m=a;
            while(m!=1)
            {
               if(m%2==0)
               {
                   m=m/2;
               }
               else if(m%2!=0)
               {
                   m=(3*m)+1;
               }
               count++;
            }
            if(count>cyclelength)
            {
                cyclelength=count;
            }
            a++;
        }
        printf("%d\n",cyclelength);
    }
    return 0;
}
