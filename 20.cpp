#include <stdio.h>
#include <string.h>
char c[1000];

void reverse(char s[]){
	int c,i,j;
	for(i=0,j=strlen(s)-1;i<j;i++,j--){
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
}

/*
void itoa(int n,char c[]){
	int i;
	for(i=0;n!=0;i++){
		c[i]=n%10+'0';
		n/=10;
		printf("%c",c[i]);
	}
	c[i]='\n';
	return;
}
*/

void itoa(int n,char s[]){
	int i,sign;
	if((sign=n)<0)
		n=-n;
	i=0;
	do{
		s[i++]=n%10+'0';
	} while((n/=10)>0);
	if(sign<0)
		s[i++]='-';
	s[i]='\0';
	reverse(s);
	return;
}

int main(){
	int n;
	scanf("%d",&n);
	itoa(n,c);
	for(int i=0;i<strlen(c);i++)
		printf("%c",c[i]);
	return 0;
}
