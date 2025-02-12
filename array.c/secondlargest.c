// #include<stdio.h>
// int main(){
//     int n,min =0;
//         printf("enter the element in array :");
//     scanf("%d",&n);
//     int arr[n];
//     printf("the elements in the array is :\n");
//     for(int i=0;i<n;i++){
//         printf("enter the element in the arr[%d] :",i);
//         scanf("%d",&arr[i]);
//     }
    
//     int max=min;
//     int smax=min;
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//         max=arr[i];
//     }
//     }
//     for(int i=0;i<=n;i++){
//       if(arr[i]>smax && arr[i]<max){
//         smax=arr[i];
//       }
//      }

//       printf("the second largest number in the array is :%d",smax);
//     return 0;
// }



#include<stdio.h>
int main(){
    int n;
    printf("enter the number of the element in the array :");
    scanf("%d",&n);
    if(n<2){
        printf("second largest number doesn't exist");
        return 0;
    }
    int arr[n];

    printf("enter the element in the arr[0]:");
    scanf("%d",&arr[0]);

    printf("enter the element in the arr[1]:");
    scanf("%d",&arr[1]);

     int max;
     int smax;

    if(arr[0] > max){
        max = arr[0];
        smax = arr[1];
    }
    else{
        max = arr[1];
        smax = arr[0];
    }

   
    for(int i=2;i<n;i++){
        printf("enter the elements in the arr[%d]:",i);
        scanf("%d",&arr[i]);

        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] < max){
            smax =arr[i];

        }

    }

    if(smax == max){
        printf("there is no second max element exist in this array :");
    }
    else{
        printf("the second largest element in this array is :%d",smax);
    }

    return 0;
}