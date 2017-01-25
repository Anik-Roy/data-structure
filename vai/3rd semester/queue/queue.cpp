#include<iostream>
#include"queue.h"

using namespace std;
queue :: queue()
{
    head = tail = NULL;
    sz = 0;
}

void queue::push(int x)
{
    node *t = new node();
    t->val=x;
    if(head==NULL)
    {
        head = tail = t;
        sz++;
    }
    t->prev=tail;
    tail->next=t;
    tail=t;
    tail->next=NULL;
    sz++;
}

void queue::pop()
{
    if(head==NULL)
        return;
    node *tmp = head;
    head=head->next;
    delete tmp;
    sz--;
}

int queue::front()
{
    if(head!=NULL)
        return head->val;
}

int queue::last()
{
    if(tail!=NULL)
        return tail->val;
}

int queue::size()
{
    return sz;
}

void queue::print()
{
    node *cur = head;
    while(cur != NULL)
    {
        cout << cur->val << endl;
        cur = cur -> next;
    }
}

bool queue::empty()
{
    if(head == NULL) return true;
    return false;
}

int main()
{
    queue q;

    q.push(5);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);
    q.pop();
    q.print();
    int f=q.front();
    cout<<"front="<<f<<endl;
    //q.print();
    int l=q.last();
    cout<<"last="<<l<<endl;
    //q.print();
    int x=q.size();
    cout<<"size="<<x<<endl;
    /*bool e = s.empty();
    if(e==true)
        cout<<"empty"<<endl;
    else
        cout<<"not empty"<<endl;*/
}
