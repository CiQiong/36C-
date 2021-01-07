#include <stdio.h>

int main(){
	int c,words=0;
	bool flag=0;
	while((c=getchar())!=EOF){
		if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')))
			flag=0;
		else if(flag==0){
			flag=1;
			words++;
		}
	}
	printf("%d\n",words);
	return 0;
}
