#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6};
	int start=0;
	int end=sizeof(arr)/sizeof(arr[0])-1;
	int temp;
	while(start<end){

	temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
	}
	
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;

}
