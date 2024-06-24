#include <stdio.h>
int pow(int a,int b);  
int main(){
	int n;
	printf("enter binary number: ");
	scanf("%d",&n);
	int i=0,dec=0,rem;
	while(n>0){
		rem=n%10;
		n/=10;
		dec += rem *pow(2,i);
		++i;
	}
	printf("Number in decimal: %d\n",dec);
	return 0;
}

int pow (int a , int b) {
    int power = 1 , i ;
    for ( i = 1 ; i <= b ; ++i ) {
        power = power * a ;
    }
    return power;
}

