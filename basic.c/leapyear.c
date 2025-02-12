#include<stdio.h>
int main(){
  int n;
  printf("enter the year:");
  scanf("%d",&n);
  if((n%4==0 && n%100!=0)|| n%400==0){
    printf(" %d given year is leap year",n);
  }
  else{
    printf(" %d given year is not a leap year",n);
  }

    return 0;
}