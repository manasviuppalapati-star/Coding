#include<stdio.h>
#include<math.h>
struct Pythagorean {
	int num[3];
};
int main(){
	struct Pythagorean pyt;
	int i,theo,a,b,c,asq,bsq,csq;
	for(i=0;i<3;i++){
		scanf("%d",&pyt.num[i]);
	}
	a=pyt.num[0];
	b=pyt.num[1];
	asq=pow(pyt.num[0],2);
	bsq=pow(pyt.num[1],2);
	theo=asq+bsq;
	c=pyt.num[2];
	csq=pow(pyt.num[2],2);
	if(csq==theo){
		printf("Pythagorean triple\n");
		
		if((a==3 && b==4 && c==5)||(a==4 && b==3 && c==5)){
			printf("special triple");
		}
		else{
			printf("not special triple");
		}
    }
    else{
    	printf(" not Pythagorean triple");
		
	}
    return 0;
}
