//  to truncate the letter "o" if it is there and to only accept the portion before it
#include<stdio.h>
#include<string.h>

int main(){
    char BookTitle[249];
    int letter;
    
    fgets(BookTitle,sizeof(BookTitle),stdin);
    
    for(letter=0 ; BookTitle[letter]!='\0'; letter++){
        if(BookTitle[letter]=='o'|| BookTitle[letter]=='O'){
            BookTitle[letter]='\0';
            break;
        }
    }
    printf("Accepted String: %s\n",BookTitle);
    
    return 0;
}
