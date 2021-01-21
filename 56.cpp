#include <iostream>
#include <string>
using namespace std;

void name_string(string &name,const string &prefix,const string &suffix){
	name.insert(name.begin(),' ');
	name.insert(name.begin(),prefix.begin(),prefix.end());
	name.append(" ");
	name.append(suffix.begin(),suffix.end());
}

int main(){
	string s="Ci qiong";
	name_string(s,"Mr.","Jr.");
	cout<<s<<endl;
	
	s="K";
	name_string(s,"Ms.","III");
	cout<<s<<endl;
	
	return 0;
} 
