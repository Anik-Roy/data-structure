#include <iostream>
#include "linkd.h"
#include<cstdio>
using namespace std;
    list :: list()
    {
        head = tail = NULL;
        sz = 0;
    }
void list::delall(int x)
{
    node *current = head;
    node *temp=NULL;
    printf("yes\n");
    while(current != NULL)
    {
        if(current -> value == x && temp == NULL)
        {
            head = current -> next;
        }
        else if(current -> value == x)
        {
            temp -> next = current -> next;
        }
        else
        {
            temp = current;
        }
        current = current -> next;
    }
}
int main()
{
    list o;
    o.add_to_head(5);
    o.add_to_head(7);
    o.add_to_head(8);
    o.add_to_head(4);
    o.add_to_head(7);
    o.add_to_head(5);
    o.print();
//    o.del_head();
    int x;
    cin>>x;
    o.delallx(x);
    o.print();
