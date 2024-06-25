#include<stdio.h>
#include<math.h>

int main(){
    int n , sqrn;
    int temp,count=0;
    
    printf("enter a number: ");
    scanf("%d", &n);
    temp=n;
    //finding number of digits in n
    while(temp>0){
        count++;
        temp=temp/10;
    }
    
    //finding square of n
    sqrn=pow(n,2);
   
    //checking if n is automprphic
    int x = pow(10,count);
    
    if( sqrn%x == n) printf("this is automprphic number");
    else printf("Not a automprphic number");
    
    printf("\n");    
    return 0;
}
