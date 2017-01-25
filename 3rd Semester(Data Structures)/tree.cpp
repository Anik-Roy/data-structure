#include<iostream>

using namespace std;

struct node{
          int value;
          node *left=NULL;
          node *right=NULL;
};



node *root=NULL;
void insert(int x);
void insert(node *r,int x);
void printInorder(node *r);
void printPreorder(node *r);
void printPostorder(node *r);
node* find(int x);
node* find(node *r,int x);
node* findMax(node *r);
node* findMin(node *r);
void del(int x);
void del(node *r,node *p,int x);

int main()
{
          while(true){
                    cout<<endl<<"Press:"<<endl<<"1 for insert"<<endl<< "2 for print inorder"<<endl<<"3 for print preorder"<<endl
                    <<"4 for print Postorder"<<endl<<"5 for find"<<endl<<"6 for find maximum"<<endl
                    <<"7 for find minimum"<<endl<<"8 for delete"<<endl<<endl;
                    int i;
                    cin>>i;
                    if(i==1){
                              int x;
                              cout<<"Enter Value:";
                              cin>>x;
                              insert(x);
                    }
                    else if(i==2){
                              cout<<"Tree elements:";
                              printInorder(root);
                    }
                    else if(i==3){
                              cout<<"Tree elements:";
                              printPreorder(root);
                    }
                    else if(i==4){
                              cout<<"Tree elements:";
                              printPostorder(root);
                    }
                    else if(i==5){
                              cout<<"Enter Item:";
                              int x;cin>>x;
                              node *temp=find(x);
                              if(temp==NULL) cout<<"Item not found"<<endl;
                              else cout<<"Item found"<<endl;
                    }
                    else if(i==6){
                              node *temp=findMax(root);
                              cout<<"Max Value:"<<temp->value<<endl;
                    }
                    else if(i==7){
                              node *temp=findMin(root);
                              cout<<"Min Value:"<<temp->value<<endl;
                    }
                    else if(i==8){
                        cout<<"Enter Value:";
                        int x; cin>>x;
                        del(x);
                    }

          }
}
void insert(int x)
{
          if(root==NULL){
                    node *temp=new node();
                    temp->value=x;
                    root=temp;
          }
          else insert(root,x);
}
void insert(node *r,int x)
{
          if(x<r->value){
                    if(r->left==NULL){
                              node *n=new node();
                              n->value=x;
                              r->left=n;
                    }
                    else insert(r->left,x);

          }
          else{
                    if(r->right==NULL){
                              node *n=new node();
                              n->value=x;
                              r->right=n;
                    }
                    else insert(r->right,x);
          }
}
void printInorder(node *r)
{
          if(r==NULL) return;
          printInorder(r->left);
          cout<<r->value<<" ";
          printInorder(r->right);
}
void printPreorder(node *r)
{
          if(r==NULL) return;
          cout<<r->value<<" ";
          printPreorder(r->left);
          printPreorder(r->right);
}
void printPostorder(node *r)
{
          if(r==NULL) return;
          printPostorder(r->left);
          printPostorder(r->right);
          cout<<r->value<<" ";
}
node* find(int x)
{
          if(root==NULL) return NULL;
          else if(root->value==x) return root;
          else return find(root,x);
}
node* find(node *r,int x)
{
          if(r==NULL) return NULL;
          else if(x<r->value){
                    if(x==r->left->value) return r->left;
                    else return find(r->left,x);
          }
          else{
                    if(x==r->right->value) return r->right;
                    else return find(r->right,x);
          }
}
node* findMax(node *r)
{
    if(r==NULL) return NULL;
    node *temp=r;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
node* findMin(node *r)
{
    if(r==NULL) return NULL;
    node *temp=r;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
void del(int x)
{
    if(root==NULL) return;
    node *temp=new node();
    temp->right=root;
    del(root,temp,x);
    root=temp->right;
    delete temp;

}
void del(node *r,node *p,int x)
{
    if(r==NULL) return;
    if(x < r->value)
        del(r->left, r, x);
    else if(x > r->value)
        del(r->right, r, x);
    else{
        if(r->right!=NULL && r->left!=NULL){
            node *m = findMin(r->right);
            r->value = m->value;
            del(r->right,r,m->value);
            delete m;
        }
        else if(r->left != NULL){
            if(p->left==r) p->left=r->left;
            else p->right=r->left;
        }
        else if(r->right != NULL){
            if(p->left==r) p->left=r->right;
            else p->right=r->right;
        }
        else{
            if(p->left == r) p->left=NULL;
            else p->right = NULL;
        }
    }
}
