#include<stdio.h>
#include<iostream>
#include "deque.h"
using namespace std ;

void Deque:: push_front(int x)
{
    node *p = new node;
    p-> data =x;
    p-> next = Front;
    Front = p;
    if(Back == NULL)
    Back = Front;
}
void Deque :: push_back(int x)
{
    node *p = new node;
    p-> data = x;
    if (Back==NULL)
    {
        p->next = NULL;
        Back = Front=  p;
    }
        Back->next = p;
        p->next = NULL;
        Back = p;
    }

void Deque:: pop_front()
{
    node *temp;
    if (Front== NULL)
    {
        printf("there is nothing to pop.\n");
        return;
    }
    temp = Front-> next;
    Front = temp;
    if(Front== NULL)
    Back= NULL
}
void Deque :: pop_back()
{
    node *temp;
    temp = Front;
    if(Back==NULL)
    {
        printf("there is nothing to pop.\n");
        return;
    }
    if (temp==Back)
    {
      Front=Back=NULL;
      return;
    }
    while(temp->next != Back)
    {
        temp=temp->next;
    }
    Back=temp;
}
void Deque :: display()
{
     node *temp;
     temp = Front;
     if(Front== NULL)
     {
        printf("there is nothing to display.\n");
        return;

     }
    while(temp!= Back)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("%d", Back->data);
}
int main()
{
 Deque d;
   d.push_front(1);
   d.push_front(2);
   d.push_front(3);
   d.push_back (20);
   d.push_back(50)
   d.push_back(60);
   d.pop_front();
   d.pop_back();
   d.display();
   return 0;
}
