#include<stdio.h>
int main(){
int a,b,c,largest;
    printf("enter the three number :");
    scanf("%d %d %d",&a,&b,&c);
    largest=(a>b)?(a>c? a:c):(b>c ? b:c);
    printf("the lagest number among three number is :%d",largest);
    return 0;
}