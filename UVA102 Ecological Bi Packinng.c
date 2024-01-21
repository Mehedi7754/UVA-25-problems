#include <stdio.h>
int main()
{
    int brown[3],green[3],clear[3],moves[6];
    int i,minmoves;
    while(scanf("%d %d %d %d %d %d %d %d %d",&brown[0],&green[0],&clear[0],&brown[1],&green[1],&clear[1],&brown[2],&green[2],&clear[2])!=EOF)
    {
       moves[0] = green[0] + clear[0] + brown[1] + green[1] + brown[2] + clear[2];//BCG
        moves[1] = green[0] + clear[0] + brown[1] + clear[1] + brown[2] + green[2];//BGC
        moves[2] = brown[0] + green[0] + clear[1] + green[1] + brown[2] + clear[2];//CBG
        moves[3] = brown[0] + green[0] + brown[1] + clear[1] + green[2] + clear[2];//CGB
        moves[4] = brown[0] + clear[0] + clear[1] + green[1] + brown[2] + green[2];//GBC
        moves[5] = brown[0] + clear[0] + brown[1] + green[1] + green[2] + clear[2];//GCB
        minmoves=moves[0];
        for(i=1;i<=5;i++)
        {
            if(minmoves>moves[i])
            {
                minmoves=moves[i];
            }
        }
        if(minmoves==moves[0]) printf("BCG");
        else if(minmoves==moves[1]) printf("BGC");
        else if(minmoves==moves[2]) printf("CBG");
        else if(minmoves==moves[3]) printf("CGB");
        else if(minmoves==moves[4]) printf("GBC");
        else if(minmoves==moves[5]) printf("GCB");
        printf(" %d\n",minmoves);
    }
    return 0;
}

