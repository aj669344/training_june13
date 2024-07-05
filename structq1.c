
#include <stdio.h>
#include<string.h>

typedef struct{
    char pID[10];
    int amnt;
}products;


void sortdsc(products arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            if(arr[j].amnt>arr[i].amnt){
                products temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
}

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    products a[n];
    printf("enter pID and its amount: ");
    for(int i=0;i<n;i++){
        scanf("%s %d",a[i].pID, &a[i].amnt);
        //scanf("%d");
    }
    printf("sorted array\n");
    sortdsc(a,n);
    
    for(int i=0;i<n;i++) {
        int flag=1;
        for(int j=i-1;j>=0;j--){
            
            if(strcmp(a[i].pID,a[j].pID)==0){
                flag=0;
            }
        }
       if(flag) printf("%s - %d\n",a[i].pID,a[i].amnt);
        
    }
    return 0;
}  
