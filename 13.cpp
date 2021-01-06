#include <stdio.h>

int main(){
	printf("用3除余2的数：");
	for(int i=101;i<=200;i+=3)
		printf("%d ",i);
	printf("\n用5除余3的数：");
	for(int i=103;i<=200;i+=5)
		printf("%d ",i);
	printf("\n用7除余2的数：");
	for(int i=107;i<=200;i+=7)
		printf("%d ",i);
	
	return 0;
}

