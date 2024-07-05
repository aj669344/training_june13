#include <stdio.h>
#include<string.h>


void sort(char str[]){
    int n=strlen(str);
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}

int main()
{
    printf("enter string1: ");
    char str1[100];
    scanf("%s",str1);
    
    printf("enter string2: ");
    char str2[100];
    scanf("%s",str2);
    
    if(strlen(str1)!=strlen(str2)){
        printf("not anagram\n");
        return 0;
    }
    
    sort(str1);
    sort(str2);
    
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]!=str2[i]){
            printf("not anagram\n");
            return 0;
        }
    }
    
    printf("both strings are anagram\n");
    return 0;
    printf("\n\n");
}
