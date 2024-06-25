#include<stdio.h>
#include<limits.h>
int main(){
	int arr[]={23,2,45,12,32,87};
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
		if(arr[i]<min){
		       	min=arr[i];}
		if(arr[i]>max) {
			max=arr[i];}

	}
	printf("max is %d\n",max);
	printf("min is %d\n",min);
	return 0;

}
