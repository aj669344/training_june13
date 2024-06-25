#include<stdio.h>
#include<math.h>
int main(){
	int number,sum=0,rem=0;
	printf("enter a number: ");
	scanf("%d",&number);
	while(number>0){
	        rem=number%10;
		sum=sum+rem;
		number=number/10;

	}
	printf("%d\n",sum);
        return 0;
}
