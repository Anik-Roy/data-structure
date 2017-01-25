#include<stdio.h>
int main(){
    int n,i,j,t;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(ara[i]>ara[j])
            {
                t = ara[i];
                ara[i] = ara[j];
                ara[j] = t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",ara[i]);
    return 0;
}
