#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    char c;
    char substr[100];
    int cid=-1,sid=-1;
    
    printf("enter a string: ");
    fgets(str,100,stdin);
    
    int n = strlen(str);
    printf("enter a char: ");
    scanf("%c", &c);
    printf("enter a substring: ");
    scanf("%s",substr);
    
    for(int i=0;i<n;i++){
        if(str[i]==c){
            cid=i;
            break;
        }
    }
    
    int j=0,k=0;
    int sublen = strlen(substr);
    for(int i=0;i<n;i++){
        if(str[i]==substr[j]){
            k=i;
            j=0;
            while(j<sublen){
                if(str[k]!=substr[j]) break;
                else {
                    k++;
                    j++;
                }
            }
        }
        if(j==sublen){
            sid=i;
            break;
        }
    }
    
    printf("index of char is %d and index of substring is %d\n\n", cid,sid);
    return 0;
    
}
