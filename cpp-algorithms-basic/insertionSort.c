#include<stdio.h>
int main(){
	int n,i,pos,insert;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	n++;
    scanf("%d %d",&pos,&insert);
    for(i=pos;i<n;i++){
    	a[n-1]=a[pos-1];
	}
	a[pos]=insert;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
