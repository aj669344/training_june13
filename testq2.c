#include <stdio.h>


int main() {
    int n,m;
    printf("enter size of array1: ");
    scanf("%d",&n);
    printf("enter size of array2: ");
    scanf("%d",&m);
    
    int arr1[n];
    int arr2[m];
    
    printf("enter elements of arr1: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("enter elements of arr2: ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    
    int res[n+m];
    
    int i=0,j=0,k=0;
    
    while(i<n && j<m){
        
        if (arr1[i] <= arr2[j]) {
            res[k] = arr1[i];
            k++;
            i++;
        } else {
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    while (i < n) {
        res[k++] = arr1[i++];
    }


    while (j < m) {
        res[k++] = arr2[j++];
    }
    
    
    printf("Merged array: ");
    for(int i=0;i<n+m;i++){
        printf("%d ", res[i]);
    }

    printf("\n\n");
    
}
