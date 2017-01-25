struct node
{
    int val;
    node *up, *down;
    node()
    {
        up=down=NULL;
        val=0;
    }
};

struct stack
{
    node *topper;
    int sz;
    stack();
    //~stack();

    void push(int x);
    void pop();
    void print();
    int top();
    int size();
    bool empty();
};
