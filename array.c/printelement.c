#include<stdio.h>
int main(){
   int n;
    printf("enter the no of element in an array :");
   scanf("%d",&n);
   int arr[n];
   printf("the elements in the array is :\n");
   for(int i=0;i<n;i++){
    printf("enter the in the array arr[%d]:",i);
    scanf("%d",&arr[i]);
   }

    return 0;
}