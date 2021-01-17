//24 

#include <stdio.h>
int sum=0,upperlim=1;
void queen(int row,int ld,int rd){
	if(row!=upperlim){
		int pos=upperlim&~(row|ld|rd);
		while(pos){
			int p=pos&-pos;
			pos-=p;
			queen(row+p,(ld+p)<<1,(rd+p)>>1);
		} 
	}else sum++;
}
int main(){
	int n;
	scanf("%d",&n);
	upperlim=(upperlim<<n)-1;
	queen(0,0,0);
	printf("%dÖÖ\n",sum);	
	return 0;
}
