#include <stdio.h>
int main()
{
    char a[101][101];
    int y[101][101];
    int m,n,i,j,field=1;
    while (scanf("%d %d",&m,&n)!=EOF)
    {

        if (m==0 && n==0)
        {
            break;
        }
        for (i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf(" %c",&a[i][j]);
                y[i][j]=0;
            }

        }

        for (i=1; i<=m; i++)
        {
            for (j=1; j<=n; j++)
            {
                if (a[i][j]=='*')
                {
                    y[i-1][j-1]++;
                    y[i-1][j]++;
                    y[i-1][j+1]++;
                    y[i][j-1]++;
                    y[i][j+1]++;
                    y[i+1][j-1]++;
                    y[i+1][j]++;
                    y[i+1][j+1]++;
                }
            }
        }
        if (field!=1)
            printf("\n");
        printf("Field #%d:\n",field++);
        for (i=1; i<=m; i++)
        {
            for (j=1; j<=n; j++)
            {
                if (a[i][j]=='*')
                    printf("*");
                else printf("%d",y[i][j]);
            }
            printf("\n");
        }


    }


    return 0;
}

