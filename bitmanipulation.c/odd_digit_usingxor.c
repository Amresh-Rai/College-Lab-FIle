#include<stdio.h>
void one_odd(int arr[],int n){
    int xor=arr[0];
    for(int i=1;i<n;i++){
        xor = xor^arr[i];   
    }
    printf("%d",xor);
}
void two_odd(int arr[],int n){
    int xor=0;
    for(int i=0;i<n;i++){
    xor =xor ^arr[i];
    }
    int rsb = xor & ~(xor) + 1;

    printf("%d\n",rsb);
    int zero =0 ,one = 0;
    for (int i = 0; i < n; i++)
    {
        if((arr[i] & rsb)== 0){
          zero = zero^arr[i];
        }
        else {
            one = one ^ arr[i];
        }
    }
    printf("the two_odd digit in the array is :%d %d",zero,one);
    

}


int main(){
    int n;
    printf("enter the number of element :");
    scanf("%d",&n);
    int arr[n];
    printf("the element in the array is :\n");
    for(int i=0;i<n;i++){
        printf("enter the element in the arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
  // one_odd(arr,n);
    two_odd(arr,n);
   
    return 0;
}