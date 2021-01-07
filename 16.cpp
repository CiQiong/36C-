#include <stdio.h>
const double pi=3.1415926;
int main(){
	double r,h,s,v;
	scanf("%lf %lf",&r,&h);
	s=pi*r*2*h+2*pi*r*r;
	v=pi*r*r*h;
	printf("面积是%.2f，体积是%.2f",s,v);	
	return 0;
}
