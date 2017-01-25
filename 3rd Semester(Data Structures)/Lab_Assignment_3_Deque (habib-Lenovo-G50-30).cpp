#include<iostream>

using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
};
node *front=NULL;
node *back=NULL;

void pushfront(int x);
void pushback(int x);
void popfront();
void popback();
int pfront();
int pback();
void print();

int main()
{
    while(true){
        cout<<endl<<"1 -pushfront"<<endl<<"2 -pushback"<<endl<<"3 -popfront"<<endl
        <<"4 -popback"<<endl<<"5 -print front"<<endl<<"6 -print back"<<endl<<"7 -print"<<endl<<endl;
        int n;
        cin>>n;

        switch(n)
        {

        case 1: cout<<"Enter data:";
                int x; cin>>x;
                pushfront(x);
                cout<<"Data inserted"<<endl;
                break;
        case 2: cout<<"Enter data:";
                int y; cin>>y;
                pushback(y);
                cout<<"Data inserted"<<endl;
                break;
        case 3: popfront();
                cout<<"Data deleted"<<endl;
                break;
        case 4: popback();
                cout<<"Data deleted"<<endl;
                break;

        case 5: int temp;
				temp=pfront();
				if(temp==NULL) cout<<"Deque is empty"<<endl;
				else cout<<"front's value:"<<temp<<endl;
				break;
        case 6: int temp1;
				temp1=pback();
				if(temp1==NULL) cout<<"Deque is empty"<<endl;
				else cout<<"back's value:"<<temp1<<endl;
				break;
        case 7: print();
                break;
        default:cout<<"Bad Input"<<endl;
                break;

        }
    }
}
void pushfront(int x)
{
    node *temp=new node();
    temp->data=x;
    if(front==NULL){
        temp->prev=NULL;
        temp->next=NULL;
        front=back=temp;
    }
    else{
        front->prev=temp;
        temp->next=front;
        temp->prev=NULL;
        front=temp;
    }
}
void pushback(int x)
{
    node *temp=new node();
    temp->data=x;
    if(front==NULL){
        temp->prev=NULL;
        temp->next=NULL;
        front=back=temp;
    }
    else{
        back->next=temp;
        temp->prev=back;
        temp->next=NULL;
        back=temp;
    }
}
void popfront()
{
    if(front==NULL){
        cout<<"Deque is empty"<<endl;
    }
    else{
        node *temp=front;
        front=front->next;
        front->prev=NULL;
        delete(temp);
    }
}
void popback()
{
    if(front==NULL){
        cout<<"Deque is empty"<<endl;
    }
    else{
        node *temp=back;
        back=back->prev;
        back->next=NULL;
        delete(temp);
    }
}
int pfront()
{
    if(front==NULL) return NULL;
    else return front->data;
}
int pback()
{
    if(back==NULL) return NULL;
    else return back->data;
}
void print()
{
    node *temp=front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
