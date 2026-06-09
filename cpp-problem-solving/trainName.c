//trainName



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[10];
    fgets(a,sizeof(a),stdin);
    
    if(a[0]=='m' && a[1]=='o' && a[2]=='n'){
                printf("Express 1");
    }
    else if(a[0]=='t' && a[1]=='u' && a[2]=='e'){
                printf("Rapid 2");
    }
    else if (a[0]=='w' && a[1]=='e' && a[2]=='d'){
                printf("Swift 3");
    }
    else if (a[0]=='t' && a[1]=='h' && a[2]=='u'){
                printf("Lightning 4");
                
    }
    else if(a[0]=='f' && a[1]=='r' && a[2]=='i'){
                printf("Thunder 5");
    }
    else if(a[0]=='s' && a[1]=='a' && a[2]=='t'){
                printf("Bullet 6");
    }
    else if(a[0]=='s' && a[1]=='u' && a[2]=='n'){
                printf("Weekend Express");
    }
    else{
        printf("Invalid day");
        
    }
    return 0;
}
