#include<stdio.h>
#define pi 3.14
int main(){
	
	int radius;
	printf("Enter radius of the circle: ");
	scanf("%d", &radius);
	int area=pi*radius*radius;
	int circumference=2*pi*radius;
	printf("area is: %d\n", area);
	printf("circumference is %d\n", circumference);
	return 0;
}

