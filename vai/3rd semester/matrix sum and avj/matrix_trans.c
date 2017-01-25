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
    int temp;
    for(i=0;i<n1;i++)
    {
        for(j=i;j<m1;j++)
        {
            temp = A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    return 0;
}

