#include <stdio.h>
#include <math.h>

int main(){
	
	double a,b,c;
	scanf("%lf %lg %lf",&a,&b,&c);
	if(a+b<c||b+c<a||a+c<b){
		printf("������������Ρ�\n");
		return -1; 
	} 
	//���׹�ʽ 
	double p=(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c)); 
	
	printf("�����%.2f\n",s);

	if(a==b&&b==c&&c==a)
		printf("�ȱ������Ρ�\n");
	if((a==b)||(b==c)||(a==c))
		printf("���������Ρ�\n");
	if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
		printf("ֱ�������Ρ�\n");
	return 0;
}
 
