#include<stdio.h>
int main(){
int n;
printf("enter the number :");
scanf("%d",&n);
for(int i=2;i<n;i++){
    if(n%i==0){
        
        printf("the entered number id not a prime number");

    }
    else{
        printf("the eneterd number is prime number ");
    }
}
    return 0;
}