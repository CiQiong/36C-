#include <stdio.h>

int main(){
	int n,k,m;
	scanf("%d %d %d",&n,&k,&m);
	int a[1000]={0};
	for(int i=0;i<n;i++)
		a[i]=i+1;
	while(n){
		k=(k-1+m)%n;
		printf("%d",a[k]);
		printf("\n");
		for(int i=k;i<n-1;i++)
			a[i]=a[i+1];
		n--;
		for(int i=0;i<n;i++)
			printf("%d",a[i]);
		printf("\n");
		
	}
	
	printf("\n");
	return 0;
}
