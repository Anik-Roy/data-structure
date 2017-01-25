#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
        printf("%d ",ara[i]);
    return 0;
}
