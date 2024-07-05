#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    printf("enter string: ");
    scanf("%[^\n]",str);
    getchar();
    
    char rem;
    printf("enter char to remove: ");
    scanf("%c",&rem);
    int x=-1;
    for(int i=strlen(str);i>=0;i--){
        
        if(str[i]==rem){
            x=i;
            break;
        }
    }
    if(x!=-1){
       for(int i=x;i<strlen(str)-1;i++){
        str[i]= str[i+1];
    }
    str[strlen(str)-1]='\0'; 
     printf("%s",str);
    }else{
       printf("Not found");  
    }
    
    
    
   
    return 0;
}
