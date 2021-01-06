#include<stdio.h>

int main(){
	int a[10000]={0};
	int n,tmp;
	scanf("%d",&n);
	
	//从输入解决 
	for(int i=0;i<n;i++){
		if(i>n/2){
			a[i]=a[n-1-i];
			scanf("%d",&a[n-1-i]);
		}else 
			scanf("%d",&a[i]);
	}
	
	/*
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int tmp2; 
	for(int i=0;i<n/2;i++){
		tmp2=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=tmp2;
	}
	*/
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
		
	return 0;
}
