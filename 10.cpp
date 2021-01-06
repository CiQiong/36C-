#include <stdio.h>

double convert(double f){
	return (f-32)*5/9;
}

int main(){
	double f;
	scanf("%lf",&f);
	printf("%.2f\n",convert(f));
	return 0;
}
