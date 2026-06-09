// to truncate when the occurence of a non-uppercase letter happens
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char DeptCodes[249];
    int Char;
    
    if (fgets(DeptCodes,sizeof(DeptCodes),stdin)==NULL){
        return 1;
    }
    
    for (Char=0;DeptCodes[Char]!='\0';Char++){
        if(!isupper(DeptCodes[Char])){
            DeptCodes[Char]='\0';
            break;
        }
    }
    printf("%s\n",DeptCodes);
    
    return 0;
}
