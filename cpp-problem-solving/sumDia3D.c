#include<stdio.h>
int main(){
	int n[5][5][5];
	int r,c,h,rc,cc,hc,sum=0;
	scanf("%d %d %d",&r,&c,&h);
	for(rc=0;rc<r;rc++){
		for(cc=0;cc<c;cc++){
			for(hc=0;hc<h;hc++){
				scanf("%d",&n[rc][cc][hc]);
			}
		}
	}
	for(rc=0;rc<r;rc++){
		for(cc=0;cc<c;cc++){
			for(hc=0;hc<h;hc++){
				if(rc==cc && cc==hc){
					sum=sum+n[rc][cc][hc];
				}	   
			}
		}
	}
	printf("%d",sum);
	return 0;
}
