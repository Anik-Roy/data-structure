struct node
{
	char val;
	node *left, *right;
	node()
	{
		val = '0';
		left = right = NULL;
	}
};

struct bst
{
	node *root;
	bst();
	void insert( char v);
	void insert(node *r,char v);
	void printsorted();
	void printsorted(node *r);
};
