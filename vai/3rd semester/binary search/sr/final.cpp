#include<stdio.h>
#include<iostream>
#include "deque.h"
using namespace std ;

void Deque:: push_front(int x)
{
    node *p = new node();
    p-> data =x;

    if(back == NULL)
    {back = front=p;
    return;
    }
    p-> next = front;
    front->prev= p;
    front=p;
    sz++;
}
void Deque :: push_back(int x)
{
    node *p = new node;
    p-> data = x;
    if (back==NULL)
    {

        back = front=  p;
        return;
    }
        back->next = p;
        p->prev= back;
        back=p;
        back->next = NULL;
        sz++;
    }

void Deque:: pop_front()
{
    node *temp;
    if (front== NULL)
    {
        printf("there is nothing to pop.\n");
        return;
    }
    temp = front;
    front = front->next;
    if(front== NULL)
    back= NULL ;
}
void Deque :: pop_back()
{
    node *temp;
    temp = back;
    if(back==NULL)
    {
        printf("there is nothing to pop.\n");
        return;
    }
    back= back->prev;
    delete temp;
    back->next=NULL;
    sz-- ;
}
   void Deque :: display()
{
    node *cur=front;
    while(cur!=NULL)
    {
       cout<<cur->data<<" ";
       //printf("%d", cur->data);
       cur=cur->next;
    }
}
    // node *temp;
    //temp = front;
   // if(front== NULL)
     //{
       // printf("there is nothing to display.\n");
       // return;

    // }
   // while(temp!= back)
    //{
       // printf("%d ", temp->data);
       // temp = temp->next;
    //}
   // printf("%d", back->data);
//
int main()
{
   Deque d;
   d.push_front(1);
   d.push_front(2);
   d.push_front(3);
   d.push_back (20);
   d.push_back(50);
   d.push_back(60);
   d.pop_front();
   d.pop_back();
   d.display();
   return 0;
}
