#include <stdio.h>

void func(char c){
	if(c>='a'&&c<='z')
		printf("Ð¡Ð´×ÖÄ¸\n");
	else if(c>='A'&&c<='Z')
		printf("´óÐ´×ÖÄ¸\n");
	else
		printf("²»ÊÇÓ¢ÎÄ×ÖÄ¸\n");
	return; 
}

int main(){
	
	char n;
	scanf("%c",&n);
	
	func(n); 
	
	return 0;
}
