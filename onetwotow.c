#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


bool isanagram(char *str1,char *str2){

	if(strlen(str1)!=strlen(str2)){
		return false;
	}

	int freq[256]={0};
	for(int i=0;i<strlen(str1);i++){
		freq[str1[i]]++;
		freq[str2[i]]--;
	}
	for(int i=0;i<256;i++){
		if(freq[i]!=0) return false;
	}


	return true;

}

void isunique(char *str[100],int n){

	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n;j++){
		
			if(i==j) continue;
			if(isanagram(str[i],str[j])) {
				flag=1;
				break;
			}
		}
		if(flag==0) printf("%s ",str[i]);
	
	}
}





int main(){

	char str[100];
	fgets(str,100,stdin);
	str[strlen(str)-1]='\0';

	char *token=strtok(str,"|");
	char *words[100];
	int c=0;
	while(token!=NULL){
		words[c++]=token;
		token=strtok(NULL,"|");
	}

	isunique(words,c);
	printf("\n");
	return 0;


}

