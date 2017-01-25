struct node
{
    int val;
    node *left, *right;
    node()
    {
        val=0;
        left = right = NULL;
    }
};
struct bst
{
     node *root;
     bst();
     //~bst();
     void insert (int v);
     int insert (node *r, int v);
     void printsorted( );
     void printsorted(node *r);
     void preorder();
     void preorder(node *r);
     void postorder();
     void postorder(node *r);
};
