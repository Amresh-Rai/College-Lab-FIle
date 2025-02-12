#include<stdio.h>
#include<math.h>
int main(){
int num, n=0,result=0,temp=0,original;
printf("enter the number :");
scanf("%d",&num);
original=num;
while(num!=0){
    num/=10;
    n++;
}
num=original;
while(num!=0){
    temp=num%10;
    result+=pow(temp,n);
      num/=10;
}
if(result==original){
    printf("the entered number is armstrong number ");
}
else{
    printf("the entered number is not armstrong number");
    
}
    return 0;
}