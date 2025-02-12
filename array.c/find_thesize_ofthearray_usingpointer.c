#include<stdio.h>
void size_function(int arr[],int size){
    printf("the size of the array in the function is :%d",size);
}
int main(){
    int arr[] = { 10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("the size of the array in the main function is :%d\n",size);
    size_function(arr,size);
    return 0;

}