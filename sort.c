#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int arr[]={98,76,54,36,8,40};
	int n= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	printf("\nsorted array\n");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	return 0;


}
