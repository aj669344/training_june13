#include<stdio.h>

#define len(arr) (sizeof(arr)/sizeof(arr[0]))

int main(){
    int arr[]={2,1,4,4,1,2};
    int n = len(arr);
    
    int i=0,flag=0;
    
    while(i<=n/2){
        
        if(arr[i]!=arr[n-i-1]){
            flag=1;
            break;
        }
        else flag=0;
        i++;
        
    }
    
    if(flag) printf("array is not a palindrome");
    else printf("array is a palindrome");
    
    return 0;
}
