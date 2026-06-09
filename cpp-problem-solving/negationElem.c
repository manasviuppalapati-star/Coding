#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n],*p;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		p=&a[i];
		printf("%d ",-*p);
	}
	return 0;
}
