#include <stdio.h>

int main()
{
    int ara[]={1,2,3,4,5};
    ara[2-1]=6;
    int i;
    for(i=0;i<5;i++)
        printf("%d ",ara[i]);
    return 0;
}
