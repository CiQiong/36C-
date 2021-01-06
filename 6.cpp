#include <stdio.h>

int fib(int n){
	if(n==0) return 1;
	if(n==1) return 1;
	int a=1,b=1,res=0;
	for(int i=2;i<=n;i++){
		res=a+b;
		a=b;
		b=res;
	}
	return res;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));
	return 0;
} 
