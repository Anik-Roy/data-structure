#include <stdio.h>
#include "bst.h"
int sum=0;
bst::bst()
{
    root=NULL;
}
void bst::insert(int v)
{
    if(root==NULL)
    {
        node *temp = new node();
        temp->val=v;
        root = temp;
    }
    insert(root,v);
}
void bst::insert(node *r,int v)
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
    printf("\n");
}
void bst::printsorted(node *r)
{
    if(r==NULL)
        return;
    printsorted(r->left);
    printf("%d ",r->val);
    printsorted(r->right);
}
int bst::find(int v)
{
    find(root,v);
}
int bst::find(node *r,int v)
{
    if(r==NULL)
        return 0;
    else if(r->val == v)
        return 1;
    else
        return find(r->left,v)|find(r->right,v);
}
void bst::preorder()
{
    preorder(root);
    printf("\n");
}
void bst::preorder(node *r)
{
    if(r==NULL)
        return;
    printf("%d ",r->val);
    preorder(r->left);
    preorder(r->right);
}
void bst::postorder()
{
    postorder(root);
    printf("\n");
}
void bst::postorder(node *r)
{
    if(r==NULL)
        return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ",r->val);
}
void bst::inorder()
{
    inorder(root);
    printf("\n");
}
void bst::inorder(node *r)
{
    if(r==NULL)
        return;
    inorder(r->left);
    printf("%d ",r->val);
    inorder(r->right);
}
int bst::countleaf()
{
    return countleaf(root);
}
int bst::countleaf(node *r)
{
    if(r==NULL)
        return 0;
    else if(r->left==NULL && r->right==NULL)
        return 1;
    else
    {
        int ans= 0;
        ans+= countleaf(r->left);
        ans+= countleaf(r->right);
        return ans;

    }
}
void bst::mirror(int v)
{
    if(root==NULL)
    {
        node *temp = new node();
        temp->val=v;
        root = temp;
    }
    mirror(root,v);
}
void bst::mirror(node *r,int v)
{
    if(r->val < v)
    {
        if(r->left==NULL)
        {
            node *temp = new node();
            temp->val=v;
            r->left=temp;
        }
        else
            mirror(r->left,v);
    }
    else if(r->val > v)
    {
        if(r->right==NULL)
        {
            node *temp = new node();
            temp->val =v;
            r->right = temp;
        }
        else
            mirror(r->right,v);
    }
}
int main()
{
    bst i;
    i.insert(7);
    i.insert(5);
    i.insert(3);
    i.insert(2);
    i.insert(11);
    i.insert(9);
    i.insert(0);
    i.insert(4);
    i.printsorted();
    i.preorder();
    i.postorder();
    i.inorder();
//    printf("leaf= %d \n",i.countleaf());
    int x ;
    x = i.countleaf();
    printf("%d",x);
    return 0;
}
