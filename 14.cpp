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
	printf("���㣺%d,������%d,ƽ����%d\n",ov80,lo60,sum/10);
	return 0;
} 
