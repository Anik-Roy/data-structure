#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ara[]={1,9,0,5};
    int i,j,maxsum=0,maxdef=0,sum,def,p1,p2,q1,q2;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            sum = ara[i]+ara[j];
            if(sum>maxsum)
            {
                maxsum = sum;
                p1=ara[i];
                p2=ara[j];
            }
            def = abs(ara[i]-ara[j]);
            if(def>maxdef)
            {
                maxdef = def;
                q1=ara[i];
                q2=ara[j];
            }
        }
    }
    printf("two elements are %d and %d when their summation is largest\n",p1,p2);
    printf("two elements are %d and %d when their difference  is largest\n",q1,q2);
    return 0;
}
