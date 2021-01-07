#include <stdio.h>

int main(){
	int ov80=0,lo60=0,sum=0,tmp;
	for(int i=0;i<10;i++){
		scanf("%d",&tmp);
		if(tmp>=80)
			ov80++;
		if(tmp<60)
			lo60++;
		sum+=tmp; 
	}
	printf("优秀：%d,不及格：%d,平均：%d\n",ov80,lo60,sum/10);
	return 0;
} 
