struct node {
    int val;
    node *left ,*right;
    node(){
        val=0;
        left=right=NULL;
    }
};

struct bst {
    node *root;
    bst();
//    ~bst();
    void insert(int v);
    void insert(node *r,int v);
    void printsorted();
    void printsorted(node *r);
    int find(int v);
    int find(node *r,int v);
    int countleaf();
    int countleaf(node *r);
    void preorder();
    void preorder(node *r);
    void postorder();
    void postorder(node *r);
    void inorder();
    void inorder(node *r);
    void mirror(int v);
    void mirror(node *r,int v);
};
