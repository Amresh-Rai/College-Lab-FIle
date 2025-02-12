#include<stdio.h>
int fibo(n){
    if (n==0){
        return 0;
    }
    else if (n==1||n==2){
        return 1;
     }
      return fibo(n-1)+fibo(n-2);
} 

int main(){
    int n,i;
    printf("enter the number :");
    scanf("%d",&n);
     printf("fibonacco series");
     for( i=1;i<=n;i++)
     
    printf("%d",fibo(i));
    return 0;
}