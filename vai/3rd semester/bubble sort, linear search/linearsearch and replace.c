#include<stdio.h>
int main(){
    int n,i,q,pos,t;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    while(scanf("%d%d",&q,&t)==2)
    {
    pos=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]==q)
        {
            pos=i+1;
            ara[i]=t;
        }
    }
    if(pos>0)
    {
        printf("found. position = %d\n",pos);
    }
    else{
        printf("not found\n");
    }
    }
    return 0;
}
