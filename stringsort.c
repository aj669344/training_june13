#include <stdio.h>
#include <string.h>

#define MAX_LEN 100 
#define MAX_STR 100 

void sort(char arr[][MAX_LEN], int n) {
    int i, j;
    char temp[MAX_LEN];

    for (i = 0; i < n-1; i++) {
        
        for (j = 0; j < n-i-1; j++) {
            
            if (strcmp(arr[j], arr[j+1]) > 0) {
            
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main() {
    char strings[MAX_STR][MAX_LEN];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    sort(strings, n);

    printf("\nStrings in lexicographic order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
} 
