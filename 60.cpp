#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	int tmp;
	for(int i=0;i<10;i++){
		cin>>tmp;
		a.push_back(tmp);
	}
	
	for(int i=1;i<10;i++)
		for(int j=0;j<10-i;j++)
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	return 0;
} 
