#include<iostream>
#include<string>
using namespace std;
int main(){
	string word,sum;
	while(cin>>word){
		sum=sum+" "+word;
		cout<<sum<<endl; 
	}
	return 0;
} 
