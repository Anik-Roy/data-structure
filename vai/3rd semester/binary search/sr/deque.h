struct node
{
    int data;
    node *next,*prev ;
    node ()
    {
        data= 0;
        next=prev=NULL;
    }
};
struct Deque
{
    node *front,*back ;
    int sz;
    Deque()
    {
        front=back=NULL;
        sz= 0;
    }
    void push_back(int x);
    void push_front(int x);
    void pop_back();
    void pop_front();
    void display();
};
