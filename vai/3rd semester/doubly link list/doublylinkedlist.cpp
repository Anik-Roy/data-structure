#include <iostream>
#include "doublelinkedlist.h"
#include<cstdio>
using namespace std;

double_linked_list :: double_linked_list()
{
    head = tail = NULL;
    sz = 0;
}
void double_linked_list :: add_to_head(int x)
{
    node *temp = new node();
    temp -> value = x;
    temp -> next = head;
    head -> previous = temp;
    head = temp;
    if (tail == NULL)
    {
        tail = head;
    }
    sz++;
}
void double_linked_list :: print()
{
    node *current = head;
    while (current != NULL)
    {
        cout << current -> value << endl;
        current = current -> next;
    }
}
void double_linked_list :: add_to_tail(int x)
{
    if (tail == NULL)
    {
        add_to_head(x);
        return;
    }
    node *temp = new node();
    temp -> value = x;
    tail -> next = temp;
    temp -> previous = tail;
    tail = temp;
    sz++;
}
int double_linked_list::size()
{
    return sz;
}
void double_linked_list :: del_head()
{
    if(head==NULL) return;

    node *t=head;
    head=head->next;
    head -> previous = NULL;
    delete t;
    sz--;
    if(head==NULL) tail=NULL;
}

void double_linked_list::replace(int x,int y)
{
    node *current = head;
    while (current != NULL)
    {
        if (current -> value == x)
        {
            current -> value = y;
            break;
        }
    }
}

int main()
{
    list o;
    //ikhan tui lekh
    return 0;
}

