#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<string> sv;
	string word;
	while(cin>>word){
		if(find(sv.begin(),sv.end(),word)==sv.end())
			sv.push_back(word);
	}
	for(const auto &w:sv)
		cout<<w<<" ";
	cout<<endl; 
	
	return 0;
}
/*
vectorû���Զ�ȥ�صĹ��ܣ�д����ʱ����Ҫ����鿴
��������û���Ѿ����棬û�еĻ�������µĵ��ʡ�
������Ԫ��vector�����ԽṹҪ���Ѳ���ʱ�䡣 
set��û���ⷽ��Ĺ��ǡ�set�ײ��ú����ʵ�֣�find����
���Ķࡣ
*/
