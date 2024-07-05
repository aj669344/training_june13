#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    scanf("%[^\n]",str);
    char *token = strtok(str," ");
    char *words[100];
    int i=0;
    while(token!=NULL){
        words[i]=token;
        token=strtok(NULL," ");
        i++;
    }
    
    for(int j=0;j<i/2;j++){
        char *temp=words[j];
        words[j]=words[i-j-1];
        words[i-j-1]=temp;
    }
    
    for(int j=0;j<i;j++){
        printf("%s ",words[j]);
    }
    
    return 0;
    
}
