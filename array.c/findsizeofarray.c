#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50,60};

    int size = sizeof(arr)/sizeof(arr[0]);
     
     printf("the size of the array is :%d",size);
    
    

    return 0;
}


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number of element:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//       printf("the element for arr[%d]:",i);
//       scanf("%d",&arr[i]);
//     }
//          int size = sizeof(arr)/sizeof(arr[0]);
//             printf("the size of the array is: %d\n",size);
//     return 0;
// }