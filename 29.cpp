#include <stdio.h>
int main(){
	char c[16];
	gets(c);
	int sum=0;
	for(int i=0;i<16;i+=4)
		sum+=((c[i]-'0')*8+(c[i+1]-'0')*4+(c[i+2]-'0')*2+(c[i+3]-'0'));
	printf("%d\n",sum);
	return 0;
}
