//If the code is valid ('A', 'B', 'C', 'D', 'E', or 'F')
//, the output displays a float value representing 
//the amount after deducting GST, rounded off to two decimal places, 
//after applying the appropriate GST //deduction.
//If the code is invalid, it displays "Invalid choice".
// You are using GCC
#include<stdio.h>
int main(){
    char code;
    float t,gst=0,res;
    scanf("%c\n",&code);
    scanf("%f\n",&t);
    if (code == 'A')
     gst=0;
     else if(code == 'B')
       gst=2;
     else if(code =='C')
       gst=5;
     else if(code =='D')
       gst=12;
      
     else if(code=='E')
       gst=18;
     else if(code == 'F')
       gst=28;
     else{  
      printf("Invalid choice");
     
      return 0;
     }
     res=t-(t*gst/100);
     printf("%.2f",res);
    
}
