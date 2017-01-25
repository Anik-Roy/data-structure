struct node
{
    int value;
    node *previous, *next;
    node()
    {
        value = 0;
        previous = next = NULL;
    }
};
struct double_linked_list
{
    node *head, *tail;
    int sz;
    double_linked_list();
    ~double_linked_list();
    void addtohead(int x);
    void addtotail(int x);
    void delhead();
    void deltail();
    void del(int x);
    //void swap(int x);
    //int find(int x);
    int replace(int x, int y);
    int size();
    void print();
};
