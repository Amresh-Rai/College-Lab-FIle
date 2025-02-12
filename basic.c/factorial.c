#include<stdio.h>
int main (){
    int n,product;
printf("enter the number:");
scanf("%d",&n);
product =1;
for(int i=1;i<=n;i++){
      product=product*i;
      }
printf("the factorial of the number is %d:",product);
    return 0;
}