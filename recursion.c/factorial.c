#include<stdio.h>
unsigned long long factorial(int f){
         if (f==0||f==1) {
         return 1;
         }
        return f*factorial(f-1);
}
int main(){
      int f;
      printf("enter the number :");
      scanf("%d",&f);
  //int result = factorial(n);
    printf("the factorial of the number is :%llu",factorial(f));
         return 0;
}