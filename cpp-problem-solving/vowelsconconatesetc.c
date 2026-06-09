//vowelsconconatesetc


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int v=0,c=0,spchar=0,d=0;
    char str[150];
    scanf("%149s",&str);
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(isalpha(ch)){
            char l=tolower(ch);
            if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'){
                v++;
            }
            else{
                c++;
            }
        }
        else if(isdigit(ch)){
            d++;
        }
        else{
            spchar++;
        }
        
    }
    printf("Vowels: %d\n",v);
    printf("Consonants: %d\n",c);
    printf("Digits: %d\n",d);
    printf("Special Characters: %d\n",spchar);
    return 0;
    
    
}
    
