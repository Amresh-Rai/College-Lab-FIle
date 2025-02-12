#include<stdio.h>
int main (){
 int n,r;
 printf("enter the digit :");
 scanf("%d",&n);
 while(n!=0){
     r=n%2;
      n=n/2;
   printf("%d",r);
   
   
 }
 
    return 0;
}