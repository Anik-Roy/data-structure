#include<iostream>
 using namespace std;
 int main()
 {
     int x,n,a;
     cin>> x,n,a;
     int st = 0;
     int en = n-1;
     int found = 0;
     while (en >= st)
     {
         int mid = (st+en)/2;
         if (mid==x)
         {
             found =1;
             break;

         }
         if(mid<x){
            st=mid+1;
         }
            else
                {
                en=mid+1;
              }
            if (found ==1){
                cout<< "yes"<<endl;
            }
                else {
                    cout<<"no"<<endl;
                }
     }
 }
