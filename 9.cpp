#include <stdio.h>

int main(){
	int tmp,max=0,min=10000;
	while(scanf("%d",&tmp)&&tmp>=0){
		if(tmp>max) max=tmp;
		if(tmp<min) min=tmp;
	} 
	printf("���ֵ��%d,��Сֵ��%d\n",max,min);
	return 0;
}
