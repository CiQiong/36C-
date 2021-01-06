#include <stdio.h>
#include <math.h>

int main(){
	
	double a,b,c;
	scanf("%lf %lg %lf",&a,&b,&c);
	if(a+b<c||b+c<a||a+c<b){
		printf("不能组成三角形。\n");
		return -1; 
	} 
	//海伦公式 
	double p=(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c)); 
	
	printf("面积是%.2f\n",s);

	if(a==b&&b==c&&c==a)
		printf("等边三角形。\n");
	if((a==b)||(b==c)||(a==c))
		printf("等腰三角形。\n");
	if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
		printf("直角三角形。\n");
	return 0;
}
 
