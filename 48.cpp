/*
#include <string>
#include <iostream>
using namespace std;

int main(){
	string str1,str2;
	cin>>str1>>str2;
	if(str1>str2)
		cout<<">"<<endl;
	if(str1<str2)
		cout<<"<"<<endl;
	if(str1==str2)
		cout<<"=="<<endl;
	return 0;
}
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str1[80],str2[80];
	cin>>str1>>str2;
	auto res=strcmp(str1,str2);
	switch(res){
		case 1:
			cout<<">"<<endl;
			break;
		case -1:
			cout<<"<"<<endl;
			break;
		case 0:
			cout<<"=="<<endl;
			break;
		default:
			cout<<"未定义的的结果"<<endl;
			break; 
	}
	return 0;
}
