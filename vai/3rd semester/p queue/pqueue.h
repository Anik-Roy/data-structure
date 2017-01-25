struct node
{
    int priority;
    int val;
    node *next;
    node()
    {
        priority  = 0;
        val = 0;
        next = NULL;
    }
};

struct p_queue
{
    node *front;
    int sz;
    p_queue()
    {
        front = NULL;
        sz=0;
    }
    void insert (int value, int prority);
    void del();
    int size();
    void display();

};
