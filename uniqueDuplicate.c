#include <stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter number of elemnts: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elemnts: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int freq[n];
    memset(freq,0,n*sizeof(int));
    for(int i=0;i<n;i++){
        
        freq[arr[i]]++;
    }
    printf("duplicates: ");
    for(int i=0;i<n;i++){
        if(freq[i]>1){
          printf("%d ",i);  
        } 
    }
    
    printf("\nUniques: ");
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==1){
          printf("%d ",arr[i]);  
        } 
    }
    return 0;
    
}
