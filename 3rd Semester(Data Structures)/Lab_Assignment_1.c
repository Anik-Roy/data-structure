#include<stdio.h>
int main()
{
   int a[30],i,n;

   for(i=0;i<6;i++){
      scanf("%d",&a[i]);
   }

   printf("Enter the index number: ");
   scanf("%d",&n);

   for(i=5;i>=n;i--){
      a[i+1]=a[i];
   }
   printf("Please enter the value of index %d: ",n);
   scanf("%d",&a[n]);

   for(i=0;i<7;i++){
      printf("%d\n",a[i]);
   }

}
