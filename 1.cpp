#include <stdio.h>

int function(int x){
	if(x<5)
		return x;
	else if(x<15)
		return x+6;
	else
		return x-6;
}

int main(){
	int x;
	scanf("%d",&x);
	int y=function(x);
	printf("%d\n",y);
	return 0;
} 
