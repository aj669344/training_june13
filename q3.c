#include<stdio.h>

int main(){
	float temp;
	printf("enter temp in celsius: ");
	scanf("%f", &temp);
	float ftemp= temp*(9/5) + 32;
	printf("\ntemp in fahrenheit is:%0.1f \n",ftemp);
	return 0;
}
