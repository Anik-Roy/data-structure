struct node
{
    int val;
    node *next, *prev;
    node()
    {
        val = 0;
        next = prev = NULL;
    }
};

struct queue
{
    node *head, *tail;
    int sz;
    queue();
    //~queue();
    void push(int x);
    void pop();
    int front();
    int last();
    int size();
    void print();
    bool empty();
};
