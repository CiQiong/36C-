#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	if(n==0)
		printf("0=0\n");
	else if(n==1)
		printf("1=1\n");
	else {
		printf("%d=1",n);
		int x=2;
		while(n!=1){
			if(n%x==0){
				printf("*%d",x);
				n/=x;
			}else 
				x++;
		}
	}
	
	return 0;
}
