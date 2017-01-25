#include <stdio.h>

int main(){
    int n,sum,i;
    double avg;
    scanf("%d",&n);
    int ara[n];
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        sum += ara[i];
    }
    avg = (double)sum / n;
    printf("sum=%d avg=%.2lf\n",sum,avg);
    return 0;
}
