#include<stdio.h>
int naturalsum(int n){
    if(n==0){
         return 0;
    }
    return n + naturalsum(n-1);
}
int main(){
    int n,i;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the sum of nth natural number :");
    for(i=1;i<=n;i++)
    printf("%d",naturalsum(i));
    
    return 0;

}