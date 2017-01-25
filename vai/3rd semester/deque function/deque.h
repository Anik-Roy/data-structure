 struct node {
 int data;
 node *next;
 };
 struct Deque {
 node *Front,*Back;
 Deque()
 {
     front=back=NULL;
 }
 void push_back(int x);
 void push_front(int x);
 void pop_back();
 void pop_front();
 void display();
 };
