#include<iostream>
using namespace std;
int a[1000];
int sz= 0;
void insert (int x);
{
    sz++ ;
    int parent, now = sz;
    a[sz] =x;
    while(now>1)
    {
        parent=now/2;
        if(a[parent]<a[now])
            break;
        swap(a[parent],a[now]);
        now= parent;
    }
}
