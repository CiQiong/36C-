#include <stdio.h>

int main(){
	int a[10]={0},tmp;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	for(int i=1;i<10;i++)
		for(int j=0;j<10-i;j++)
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	for(int i=0;i<10;i++)
		printf("%d",a[i]);
	return 0;
} 
