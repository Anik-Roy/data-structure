#include<iostream>

using namespace std;

void selectionSort(int arr[], int n) {

      int i, j, minIndex, tmp;

      for (i = 0; i < n - 1; i++) {

            minIndex = i;

            for (j = i + 1; j < n; j++)

                  if (arr[j] < arr[minIndex])

                        minIndex = j;

            if (minIndex != i) {

                  tmp = arr[i];

                  arr[i] = arr[minIndex];

                  arr[minIndex] = tmp;

            }

      }

}

int main ( )
{
    int ar[]={-5,8,11,6,-11,10};

    selectionSort(ar,6);

    for(int i=0; i<6; i++)
        cout<<ar[i]<<" ";

    cout<<endl;


}
