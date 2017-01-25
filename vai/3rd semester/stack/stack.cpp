#include<iostream>
#include "stack.h"

using namespace std;
stack :: stack()
{
    topper = NULL;
    sz=0;
}

void stack :: push(int x)
{
    node *t = new node();
    t -> val = x;
    if(topper == NULL)
    {
        topper = t;
        sz++;
        return;
    }
    topper -> up = t;
    t -> down = topper;
    topper = t;
    topper -> up = NULL;
    sz++;
}

void stack :: pop()
{
    if(topper == NULL)
    {
        return;
    }

    node *tmp = topper;
    topper = topper -> down;
    delete tmp;
    sz--;
}

void stack::print()
{
    node *cur = topper;
    while(cur != NULL)
    {
        cout << cur->val << endl;
        cur = cur -> down;
    }
}

int stack::top()
{
    return topper -> val;
}

int stack::size()
{
    return sz;
}

bool stack::empty()
{
    if(topper == NULL) return true;
    return false;
}

int main()
{
    stack s;

    s.push(5);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
    s.pop();
    s.print();
    int t=s.top();
    cout<<"top="<<t<<endl;
    //s.print();
    int x=s.size();
    cout<<"size="<<x<<endl;
    /*bool e = s.empty();
    if(e==true)
        cout<<"empty"<<endl;
    else
        cout<<"not empty"<<endl;*/
}
