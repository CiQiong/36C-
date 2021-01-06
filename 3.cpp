#include <stdio.h>

int main(){
	int matr[3][3]={0};
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&matr[i][j]);
	
	
	printf("%d\n",matr[0][0]+matr[1][1]+matr[2][2]);
	return 0;
} 
