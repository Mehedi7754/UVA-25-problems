#include<stdio.h>
int main()
{
    int t,n,max,current,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        max=0;
        scanf("%d",&n);
        while(n--){
        scanf("%d",&current);
        if(max<current)
            max=current;
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
