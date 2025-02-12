#include<stdio.h>
void n_natural(int n){
    if(n > 0){
     n_natural(n-1);
       printf("%d",n);
    }
     
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
   printf("the natural numbers are :");
    n_natural(n);
   
    return 0;
}
