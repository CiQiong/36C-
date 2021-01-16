#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	
	vector<int> v;
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++)
		v.push_back(rand()%1000);
	for(auto it=v.cbegin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	
	for(auto it=v.begin();it!=v.end();it++){
		*it*=2;
		cout<<*it<<" ";
	}
	cout<<endl;	
	return 0;
}
