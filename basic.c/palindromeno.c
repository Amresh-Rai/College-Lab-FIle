#include<stdio.h>
int main(){
int n,temp,reverse=0,original;
printf("enter the number :");
scanf("%d",&n);
original=n;
while(n!=0){
    temp=n%10;
    reverse=reverse*10;
    reverse=reverse+temp;
    n=n/10;
}
if(original==reverse){
    printf("the entered number is palindrome number");
}
else{
    printf("the entered number is not a palindrome number");
}
    return 0;
}