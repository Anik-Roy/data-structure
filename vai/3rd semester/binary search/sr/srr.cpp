#include<stdio.h>
#include<iostream>
#include "bst.h"
using namespace std ;
bst :: bst ()
{
    root=NULL;
}
void bst :: insert (int v)
{
    if(root== NULL)
    {
        node *tmp = new node();
        tmp->value =v;
        root = tmp;
        return;
    }
        else
        {
            insert(root, v);
        }

}
void bst :: insert(node *r, int V)
{
    if (V<= r-> val)
    {
        if(r->left==NULL)
        {
            node *tmp=new node();
            tmp->val=V;
            r->left=tmp;
            return;
        }
        else {
            insert(r->left, v)
        }
    }
}
else {
    if(r-> right==NULL)
    {
        node *tmp=new node();
        tmp->val=v ;
        r->right = tmp;
        return;
    }
    else{
        insert(r->right, v);
    }
}
void bst:: printsorted()
{
    printsorted(root);
}
void bst::printsorted(node *r)
{
    if(r==NULL)
    return;
printsorted(r->left);
cout<<r->val<<endl;
printsorted (r->right);
}
int main()
{
bst s;
s.insert(10);
s.insert(15);
s.insert(20);
s.printsorted;
return 0;
}
