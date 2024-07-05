#include <stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    fgets(str1,100,stdin);
    char str2[100];
    fgets(str2,100,stdin);
    str1[strlen(str1)-1]='\0';
    str2[strlen(str2)-1]='\0';
    int n;
    scanf("%d",&n);
    char ans[100];
    strncpy(ans,str1,n);
    strcat(ans,str2);
    strcat(ans,str1+n);
    ans[strlen(ans)]='\0';
    printf("%s",ans);
    printf("\n");
    return 0;
}
