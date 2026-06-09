#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    fgets(str,sizeof(str),stdin);
    int words=0,i;
    for(i=0;str[i]!='\0' ;i++){
    	if(str[i]!=' '&& str[i]!='\n'&& (i==0||str[i-1]==' '|| str[i-1]=='\n') ){ 
    		words++;
		}
	}
	printf("%d words",words);
	return 0;
}
