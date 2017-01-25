#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;

};

node *front=NULL;
node *rear=NULL;

void qinsert(int x);
void qdelete();
void qprint();
int  qfront();
int  qrear();

int main()
{
    while(true){
        cout<<endl<<"1 -qinsert"<<endl<<"2 -qdelete"<<endl<<"3 -qprint"<<endl
        <<"4 -print front's value"<<endl<<"5 -print rear's value"<<endl<<endl;
        int n;
        cin>>n;

        switch(n)
        {

        case 1: cout<<"Enter data:";
                int x; cin>>x;
                qinsert(x);
                cout<<"Data inserted"<<endl;
                break;
        case 2: qdelete();
                cout<<"Data deleted"<<endl;
                break;
        case 3: qprint();
                break;
        case 4: int a;
                a= qfront();
                if(a==NULL) cout<<"Empty queue"<<endl;
                else cout<<"front's value:"<<a<<endl;
                break;
        case 5: int b;
                b= qrear();
                if(b==NULL) cout<<"Empty queue"<<endl;
                else cout<<"rear's value:"<<b<<endl;
                break;
        default: cout<<"Bad Input"<<endl;

        }
    }

}

void qinsert(int x)
{
    node *temp=new node;
    temp->data=x;

    if(front==NULL){
        temp->prev=NULL;
        front=rear=temp;
        rear->next=NULL;
    }
    else{
        rear->next=temp;
        rear=temp;
        rear->next=NULL;
    }
}

void qdelete()
{
    if(front==NULL){
        cout<<"Empty Queue"<<endl;
    }
    else{
        node *temp=front;
        front=front->next;
        front->prev=NULL;
        delete(temp);
    }
}

void qprint()
{
    if(front==NULL){
        cout<<"Empty Queue"<<endl;
    }
    else{
        node *temp=front;
        cout<<"Queue elements:";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
    }
    cout<<endl;
    }
}
int qfront()
{
    if(front==NULL) return NULL;
    else return front->data;
}
int qrear()
{
    if(front==NULL) return NULL;
    else return rear->data;
}

