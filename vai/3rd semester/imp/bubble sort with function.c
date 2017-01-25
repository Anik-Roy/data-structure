#include<stdio.h>
void bubble_sort(int *num,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(num[i]>num[j])
            {
                t = num[i];
                num[i] = num[j];
                num[j] = t;
            }
        }
    }
}
int main(){
    int n,i,j,t;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    bubble_sort(ara,n);
    for(i=0;i<n;i++)
        printf("%d ",ara[i]);
    return 0;
}
