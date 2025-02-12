#include<stdio.h>
int main(){
int num,k;
printf("enter the digit :");
scanf("%d",&num);

printf("enter the kth position of the bit to check the kth bit:");
scanf("%d",&k);
   
   if((num >> k) & 1){
    printf("this is bit set");
   }
   else{
    printf("this not bit set");
   }

    return 0;
}