#include <iostream>
#include "linkd.h"
#include<cstdio>
using namespace std;
int flag1; //global declaration
    list :: list()
    {
        head = tail = NULL;
        sz = 0;
    }
    void list :: add_to_head(int x)
    {
        node *temp = new node();
        temp -> value = x;
        temp -> next = head;
        head = temp;
        if (tail == NULL)
        {
            tail = head;
        }
        sz++;
    }
void list :: print()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current -> value << endl;
            current = current -> next;
        }
    }
    void list :: add_to_tail(int x)
    {
        if (tail == NULL)
        {
            add_to_head(x);
            return;
        }
        node *temp = new node();
        temp -> value = x;
        tail = temp;
        sz++;
    }
int list::size()
{
    return sz;
}
void list :: del_head()
{
    if(head==NULL) return;

    node *t=head;
    head=head->next;
    delete t;
    sz--;
    if(head==NULL) tail=NULL;
}
    void list :: del_tail()
    {
        if (head == NULL )
            return;
            node *current = head;
            while (current -> next != tail)
            {
                current = current -> next;
            }
            node *temp = tail;
            tail = current;
            delete temp;
            sz--;
    }
    int list::find(int x)
{
    node *current = head;
    while (current != NULL)
    {
        if (current -> value == x)
            break;
        current = current -> next;
    }
    if (current == NULL)
        return 0;
    else
        return 1;
}
void list::swap(int x)
{
    flag1=1; //globally declared
    node *current = head;
    while (current != NULL)
    {
        if (current -> value == x)
            break;
        current = current -> next;
    }
    if ((current == NULL) || (current -> next == NULL))
    {
        flag1=0;
        return;
    }
    current -> value = current -> next -> value;
    current -> next -> value = x;
}
void list::delallx(int x)
{
    node *current = head;
    node *temp=NULL;
    printf("yes\n");
    while(current != NULL)
    {
        if(current -> value == x && temp == NULL)
        {
            head = current -> next;
            sz--;
        }
        else if(current -> value == x)
        {
            temp -> next = current -> next;
            sz--;
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
//    int x,flag;
//    cin>>x;
//    flag=o.find(x);
//    if(flag)
//        cout<<"found"<<endl;
//    else
//        cout<<"not found"<<endl;
//
//    int y;
//    cin>>y;
//    o.swap(y);
//    if(flag1) o.print();
//    else cout<<"Nothing to swap"<<endl;

    int n = o.size();
    cout<<"size = "<<n<<endl;
    return 0;
}
