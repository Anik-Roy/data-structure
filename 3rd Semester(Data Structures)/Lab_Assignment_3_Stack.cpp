#include<iostream>

using namespace std;

struct node{
    int data;
    node *up;
    node *down;
};

node *topper=NULL;

void push(int x);
void pop();
int top();
void print();

int main()
{
    while(true){
        cout<<endl<<"1 -push"<<endl<<"2 -pop"<<endl<<"3 -print"<<endl
        <<"4 -print topper"<<endl<<endl;
        int n;
        cin>>n;

        switch(n)
        {

        case 1: cout<<"Enter data:";
                int x; cin>>x;
                push(x);
                cout<<"Data inserted"<<endl;
                break;
        case 2: pop();
                cout<<"Data deleted"<<endl;
                break;
        case 3: print();
                break;
        case 4: int temp;
				temp=top();
				if(temp==NULL) cout<<"Stack is empty"<<endl;
				else cout<<"topper's value:"<<temp<<endl;
				break;
        default:cout<<"Bad input"<<endl;

        }
    }

}
void push(int x)
{
    node *temp=new node();
    temp->data=x;
    if(topper==NULL){
        topper=temp;
        topper->down=NULL;
        topper->up=NULL;
    }
    else{
        topper->up=temp;
        temp->down=topper;
        topper=temp;
    }

}
void pop()
{
    if(topper==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        node *temp=topper;
        topper=topper->down;
        topper->up=NULL;
        delete(temp);
    }
}
int top()
{
    if(topper==NULL) return NULL;
	else return topper->data;
}
void print()
{
    if(topper==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        node *temp=topper;
        cout<<"Stack elements: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->down;
        }
        cout<<endl;
    }
}
