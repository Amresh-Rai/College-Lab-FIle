#include<Stdio.h>
int even_odd(int arr[],int n){
    int currlen=1,maxlen=1;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2 -arr[i+1]%2 ==0){
            currlen=maxlen;
            currlen = 1;
         }else{
            currlen = currlen + 1;
         }
        if (currlen > maxlen){
            maxlen = currlen;
        } 

    }
    return maxlen;
}
int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      printf("%d",even_odd(arr,n));
      return 0;
    
}