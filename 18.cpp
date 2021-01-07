#include <stdio.h>

int main(){
	for(int i=1;i<=5;i++){
		for(int j=i-1;j>=1;j--)
			printf("%d",j+1);
		for(int j=i;j<=5;j++)
			printf("1");
		printf("\n");
	}
	return 0;
}
