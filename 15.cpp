#include <stdio.h>

void func(char c){
	if(c>='a'&&c<='z')
		printf("Сд��ĸ\n");
	else if(c>='A'&&c<='Z')
		printf("��д��ĸ\n");
	else
		printf("����Ӣ����ĸ\n");
	return; 
}

int main(){
	
	char n;
	scanf("%c",&n);
	
	func(n); 
	
	return 0;
}
