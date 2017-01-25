#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

#define sz 1001           /// Size

int A[sz];
int top = -1;             /// Initially Declared Top as -1

void push( int value )
{
    if( top == sz - 1 ){
        cout << "STACK IS FULL/OVERFLOW\n";        /// If the stack is almost full.
        return;
    }
    /// top = top + 1;
    A[++top] = value;
}

void pop()
{
    if( top == -1 ){
        cout << "Stack is empty\n";
        return;
    }
    top--;          /// Decrement Top After Each Call.
}

int valueoftop()
{
    return A[top];
}

void print()
{
    if( top == NULL ){
        cout << "STACK IS EMPTY\n";
        return;
    }
    for( int i = 0; i <= top; i++ ){
        printf("%d ", A[i]);
    }
    cout << endl;
}

int main()
{
    cout << "The value of top is: " << valueoftop() << endl;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    pop();
    print();
    cout << "The value of top is: " << valueoftop() << endl;

    return 0;
}
