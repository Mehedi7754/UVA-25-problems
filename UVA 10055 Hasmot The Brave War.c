#include<stdio.h>
int main()
{

    long long int hasmot,oponant;
    while(scanf("%lld%lld",&hasmot,&oponant)!=EOF){
        if(hasmot>oponant){
            printf("%lld\n",hasmot-oponant);
        }
        else{
            printf("%lld\n",oponant-hasmot);
        }
    }
    return 0;
}
