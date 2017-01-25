#include <stdio.h>

int main()
{
    int n1,n2,m1,m2,i,j;
    scanf("%d%d",&n1,&m1);
    int A[n1][m1];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
            scanf("%d",&A[i][j]);
    }
    scanf("%d%d",&n2,&m2);
    int B[n2][m2];
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
            scanf("%d",&B[i][j]);
    }
    if(m1!=n2)
        printf("not possible\n");
    else
    {
        int ans[n1][m1];
        int h,k;
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                for(h=0,k=0;h<m1;h++)
                {
                    k += A[i][h]*B[h][j];
                }
                ans[i][j]=k;
            }
        }
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
                printf("%d ",ans[i][j]);
            printf("\n");
        }
    }
    return 0;
}

