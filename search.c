#include<stdio.h>

int main(){
	int arr[]={12,4,54,87,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);}

	int key;
	printf("enter key: ");
	scanf("%d",&key);
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			printf("found key at: %d\n",i);
			break;
		}
	

		
	}


	return 0;

}
