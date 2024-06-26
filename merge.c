#include<stdio.h>
#include<math.h>

int main(){
    int arr1[]={14,87,54,66};
    int arr2[]={22,76,14,75,23};
  
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
  
    int i=0,j=0,k=0;
  
    int result[n+m];
  
    while(i<n && j<m){
        if (arr1[i]<=arr2[j]) {
            result[k]=arr1[i];
            i++;
        }
        else {
            result[k]=arr2[j];
            j++;
            
        }
        k++;
    }
    
    while(i<n){
      result[k]=arr1[i];
      i++;
      k++;
    }
    while(j<m){
      result[k]=arr2[j];
      k++;
      j++;
      
    }
  
    for(int l=0;l<n+m;l++) printf("%d ", result[l]);
    return 0;
}
