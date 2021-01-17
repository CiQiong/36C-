//25

#include <stdio.h>

int main(){
	char a[50]="My name is Li jilin.";
	char b[50]="Mr. Zhang Haoling is very happy.";
	for(int i=5,j=13;i<=17;i++,j++){
		a[j]=b[i];
	}
	for(int i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
} 
