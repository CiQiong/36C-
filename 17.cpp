#include <stdio.h>

int main(){
	int tmp,alpha=0,space=0,num=0,other=0;
	for(int i=0;(tmp=getchar())!=EOF&&tmp!='\n';++i){
		if((tmp>='A'&&tmp<='Z')||(tmp>='a'&&tmp<='z'))
			alpha++;
		else if(tmp==' ')
			space++;
		else if(tmp>='0'&&tmp<='9')
			num++;
		else
			other++;
	}
	printf("Ӣ����ĸ��%d��\n",alpha);
	printf("�ո���%d��\n",space);
	printf("������%d��\n",num);
	printf("������%d��\n",other);
	
	return 0;
}
