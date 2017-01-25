#include<iostream>
using namespace std;

struct node{
    int id;
    string name;
    node *next;
    node *prev;
};


node *head=NULL;
node *tail=NULL;

int search(int i);
void add_to_head(int i, string n);
void add_to_tail(int i, string n);
void delete_head();
void delete_tail();
void del(int i);
void print();



int main()
{

    while(1){
        cout<<endl<< "Press the key according to the given option"<<endl;
        cout<< "'h' -add_to_head"<<endl<<"'t' -add_to_tail"<<endl<<"'f' -delete_head"<<endl<<"'b' -delete_tail"<<endl<<"'d' -delete_id"<<endl<<"'p' -print_list"<<endl<<"'s' -search"<<endl<<endl;
        char c;
        cin>>c;
        switch(c)
        {
        case'h':
            {
                int a;
                cout<<"Enter ID  :";
                cin>>a;
                cout<<"Enter Name:";
                string b;
                cin>>b;
                add_to_head(a,b);
                break;

            }
        case't':
            {
                int x;
                cout<<"Enter ID  :";
                cin>>x;
                string y;
                cout<<"Enter Name:";
                cin>>y;
                add_to_tail(x,y);
                break;
            }

        case'f':
            {
                delete_head();
                break;
            }
        case'b':
            {
                delete_tail();
                break;
            }
        case'd':
            {
                int q;
                cout<<"Enter ID:";
                cin>>q;
                del(q);
                break;
            }
        case'p':
            {
                print();
                cout<<endl;
                break;
            }
        case's':
            {
                int z;
                cout<<"Enter ID:";
                cin>>z;
                if(search(z)==1) cout<<"ID found"<<endl;
                else cout<<"ID not found"<<endl;
                break;
            }
        default:
            {
                cout<<"Bad Input"<<endl;
                break;
            }
        }
    }
}
int search(int i)
{
    int k=0;
    node *temp=head;
    while(head!=NULL&&temp!=NULL){
        if(temp->id==i){
            return 1;
        }
        temp=temp->next;
    }
    return k;
}
void add_to_head(int i, string n)
{

    if(search(i)==0){
        node *temp=new node();
        temp->id=i;
        temp->name=n;
        temp->prev=NULL;
        if(head==NULL){
            head=tail=temp;
            temp->next=NULL;

            cout<<"added to head"<<endl;
        }
        else
        {
            temp->next=head;
            head->prev=temp;
            head=temp;

            cout<<"added to head"<<endl;
        }
    }
    else
    {
        cout<<"ID already existed. Try another one"<<endl;
    }
}
void add_to_tail(int i, string n)
{

    if(search(i)==0)
    {
        node *temp=new node();
        temp->id=i;
        temp->name=n;
        if(head==NULL)
        {
            head=tail=temp;

            cout<<"added to tail"<<endl;
        }
        else
        {
            node *temp1=head;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
            temp->prev=temp1;
            temp->next=NULL;
            tail=temp;

            cout<<"added to tail"<<endl;
        }
    }
    else
    {
        cout<<"ID already existed. Try another one"<<endl;
    }


}
void delete_head()
{
    if(head==NULL)
    {
        cout<<"No node to delete."<<endl;
    }
    else if(head==tail)
    {
        head=tail=NULL;

        cout<<"head deleted"<<endl;
    }
    else
    {
        node *temp=head;
        node *temp1;
        temp1=temp->next;
        temp1->prev=NULL;
        head=temp1;
        delete temp;

        cout<<"head deleted"<<endl;
    }
}
void delete_tail()
{
    if(tail==NULL)
    {
        cout<<"No node to delete."<<endl;
    }
    else if(head==tail)
    {
        head=tail=NULL;

        cout<<"tail deleted"<<endl;
    }
    else
    {
        node *temp=head;
        node *temp1;
        while(temp->next!=NULL)
        {

            temp=temp->next;
        }
        temp1=temp->prev;
        temp1->next=NULL;
        tail=temp;
        delete temp;
        cout<<"tail deleted"<<endl;
    }
}
void del(int i)
{
    if(search(i)==1)
    {
        node *temp=head;
        while(temp->id!=i)
        {
            temp=temp->next;
        }
        if(head==tail) head=tail=NULL;
        else if(temp==head) delete_head();
        else if(temp==tail) delete_tail();
        else{
            node *temp1=temp->prev;
            node *temp2=temp->next;
            temp1->next=temp2;
            temp2->prev=temp1;
        }

        cout<<"ID Deleted"<<endl;
    }
    else
    {
        cout<<"ID not found"<<endl;
    }
}
void print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<"ID:"<<temp->id<<" "<<"Name:"<<temp->name<<endl;
        temp=temp->next;
    }
}
