#include<iostream>
#include"pqueue.h"

using namespace std;

void p_queue :: insert(int value, int priority)
{
    node *tmp = new node();
    tmp -> val = value;
    tmp -> priority = priority;

    if(front == NULL || priority < front->priority)
    {
        tmp -> next = front;
        front = tmp;
    }

    else
    {
        node *q = front;
        while (q->next!=NULL && q->next->priority <= priority)
        {
            q = q->next;
        }
        tmp -> next = q -> next;
        q -> next = tmp;
    }
    sz++;
}

void p_queue :: del()
{
    if(front == NULL) return;
    node *q = front;
    front = front->next;
    delete q;
    sz--;
}

int p_queue::size()
{
    return sz;
}

void p_queue::display()
{
    node *cur=front;
    while(cur!=NULL)
    {
        cout<<cur->val<<" ";
        cur=cur->next;
    }
}

int main()
{
    p_queue p;
    p.insert(4,5);
    p.insert(5,6);
    p.display();

    //p.del();
    int x=p.size();
    cout<<"size="<<x<<endl;


}
