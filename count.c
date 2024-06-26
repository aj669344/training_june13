#include<stdio.h>

#define len(arr) (sizeof(arr)/sizeof(arr[0]))
void sort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){       
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    
}
int main(){
    int arr[]={2,1,4,1,1,4,5};
    int n = len(arr);
    
    sort(arr,n);
    printf("count of occurence\n");
    for(int i=0; i<=n-1; i++){
                int count = 1;
                while(arr[i] == arr[i+1]){
                        count++;
                        i++;
                }
                printf("%d : %d \n",arr[i],count);
    }
    return 0;
}
