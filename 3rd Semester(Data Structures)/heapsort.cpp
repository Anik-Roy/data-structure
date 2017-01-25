#include <iostream>
#include <cstdio>


using namespace std;

void heapinsert(int t[], int n, int item){
    n++;

    int ptr = n;
    t[ptr] = item;

    int par;

    while( ptr > 1 ){
        par = ptr / 2;
        if(t[par] >= t[ptr])
            return;
        swap(t[ptr],t[par]);
        ptr = par;
    }

}

int heapdelete(int t[], int n){
    int item = t[1];
    t[1] = t[n];
    n--;
    int now = 1, lc = 2, rc = 3;

    while( rc <= n ){
        if( t[now] >= t[lc] && t[now] >= t[rc])
            return item;
        if( t[lc] > t[rc] ){
            swap( t[lc], t[now] );
            now = lc;
        }
        else{
            swap( t[rc], t[now]);
            now = rc;
        }

        lc = now*2;
        rc = now*2 + 1;

    }
    if(lc==n)
        if( t[lc] > t[now] ){
            swap( t[now], t[lc]);
        }

    return item;

}

void heapsort(int t[], int n){
    for(int i = 1; i <= n-1; i++){
        heapinsert(t, i, t[i+1]);
    }


    int temp;
    for(int i = n; i > 1; i--){
        temp = heapdelete(t, i);
        t[i] = temp;
    }

}


int main()
{
    int arr[] = {-1, 44, 30, 50, 22, 60, 55, 77, 55};
    int n = 8;

    heapsort(arr, n);

    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
