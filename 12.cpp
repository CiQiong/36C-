#include <stdio.h>

int main(){
	int a[100000]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	int x,i;
	scanf("%d",&x);
	for(i=n-1;a[i]>x;i--)
		a[i+1]=a[i];
	a[i+1]=x;
		
	for(int i=0;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}
