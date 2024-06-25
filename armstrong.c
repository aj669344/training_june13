#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int temp=n,sum=0,rem=0,count=0;
    while(n>0){
        count++;
       	 n=n/10;
    }
    n=temp;
    while(n>0){
	    rem=n%10;
	    sum+=pow(rem,count);
	    n=n/10;
    }
    if(temp==sum) printf("this is armstrong number");
    else printf("Not a armstrong number");
    
    printf("\n");
    return 0;
}
