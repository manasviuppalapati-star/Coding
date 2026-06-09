#include<stdio.h>
int main(){
	int n,product=1,i;
	scanf("%d",&n);
	int a[n],*p;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		p=&a[i];
		product=product*(*p);
	}
	for(i=0;i<n;i++){
		a[i]=product/a[i];
		printf("%d",a[i]);
	}
}
