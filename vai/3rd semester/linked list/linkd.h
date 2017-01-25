struct node
{
    int value;
    node *next;
    node()
    {
        value = 0;
        next = NULL;
    }
};

struct list
{
    node *head , *tail;
    int sz;
    list ();
    //~list();

    void add_to_head( int x );
    void add_to_tail( int x );
    void del_head();
    void del_tail();
    void print();
    void delallx(int x);
    void swap(int x);
    int find( int x );
    int size();
};
