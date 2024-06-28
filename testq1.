#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
    char str[100];
    
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);
    int i;
    int len = strlen(str);
    
    if (len > 0) {
        str[0] = toupper(str[0]);
    }
   
    for (i = 1; i < len; i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
    
   
    printf("After capitalize: %s\n", str);
    return 0;
}
