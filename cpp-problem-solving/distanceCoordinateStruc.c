#include<stdio.h>
#include<math.h>
struct Line{
	int x1;
	int x2;
	int y1;
	int y2;
};
int main(){
	struct Line l;
	scanf("%d %d %d %d",&l.x1,&l.x2,&l.y1,&l.y2);
	int diff1= abs(l.x1-l.y1);
	int diff2= abs(l.x2-l.y2);
	int sq1= pow(diff1,2);
	int sq2= pow(diff2,2);
	int sum= sq1+sq2;
	float sqr= sqrt(sum);
	printf("%.2f",sqr);
}
