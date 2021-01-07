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
	printf("英文字母有%d个\n",alpha);
	printf("空格有%d个\n",space);
	printf("数字有%d个\n",num);
	printf("其他有%d个\n",other);
	
	return 0;
}
