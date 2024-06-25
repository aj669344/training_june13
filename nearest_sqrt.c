#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int sqr=sqrt(n);
    
    int a= pow(sqr+1,2);     
    int b= pow(sqr,2);
    if( (a-n) < (n-b) ) printf("%d ",a);
    else printf("%d ",b);
    return 0;
    
    
}
