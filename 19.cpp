#include <stdio.h>

long sum(int n){
	if(n==1)
		return 12;
	return sum(n-1)+n*10+2;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%ld",sum(n));
	
	return 0;
} 
