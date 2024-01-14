#include<stdio.h>
int main()
{
    int t,n,i,sum,r;
    scanf("%d",&t);
    for(i=0;i<t;i++){
       sum=0;
       r=0;
       scanf("%d",&n);
       sum=(n*63+7492)*5-498;
       if(sum<0){
        sum=sum*-1;
       }
       r=sum/10;
       printf("%d\n",r%10);
    }
    return 0;
}
