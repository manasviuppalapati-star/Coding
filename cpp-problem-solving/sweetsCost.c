#include<stdio.h>
struct details {
	char itname[100];
	int itnum;
	int quan;
	int price;
};
int main(){
	int n,i;
	scanf("%d",&n);
	struct details detail[n];
	for(i=0;i<n;i++){
		scanf("%s %d %d %d ",detail[i].itname,&detail[i].itnum,&detail[i].quan,&detail[i].price);
		
	}
	for(i=0;i<n;i++){
		printf("%s",detail[i].itname);
		int totprice=detail[i].quan*detail[i].price;
		printf(" %d\n",totprice);
	}
	return 0;
}
