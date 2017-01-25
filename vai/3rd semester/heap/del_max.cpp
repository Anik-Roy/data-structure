void del()
{
    a[1]=a[sz];
    sz--;
    int now = 1;
    while(now<sz)
    {
        int le = (now*2),re = (now*2)+1;
        if(a[now]>=a[le]&&a[now]>=a[re])
            break;
        if(a[le]>a[re])
        {
            if(a[now]<a[le])
            {
                swap(a[now],a[le]);
                now = le;
            }
        }
        else
        {
            if(a[now]<a[re])
            {
                swap(a[now],a[re]);
                now = re;
            }
        }
    }
}
