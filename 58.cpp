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
vector没有自动去重的功能，写代码时候需要额外查看
数组中有没有已经保存，没有的话才添加新的单词。
而查找元素vector的线性结构要花费不少时间。 
set就没有这方面的顾虑。set底层用红黑书实现，find操作
会快的多。
*/
