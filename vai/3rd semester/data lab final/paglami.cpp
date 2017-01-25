#include <iostream>
#include "paglami.h"

using namespace std;

bst :: bst()
{
    root = NULL;
}

void bst::insert(char v)
{
    if(root==NULL)
    {
        node *temp = new node();
        temp->val=v;
        root = temp;
    }
    insert(root,v);
}

void bst::insert(node *r,char v)
{
    if(r->val > v)
    {
        if(r->left==NULL)
        {
            node *temp = new node();
            temp->val=v;
            r->left=temp;
        }
        else
            insert(r->left,v);
    }

    else if(r->val < v)
    {
        if(r->right==NULL)
        {
            node *temp = new node();
            temp->val =v;
            r->right = temp;
        }
        else
            insert(r->right,v);
    }
}

void bst::printsorted()
{
    printsorted(root);
}

void bst::printsorted(node *r)
{
    if(r==NULL)
        return;
    printsorted(r->left);
    cout<<r->val<<endl;
    printsorted(r->right);
}

int main()
{
    bst i;
    i.insert('a');
    i.insert('b');
    i.insert('c');
    i.insert('D');
    i.insert('e');
    i.insert('f');
    i.insert('g');
    i.insert('h');
    i.printsorted();
    return 0;
}
