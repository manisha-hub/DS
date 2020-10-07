#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int a[size],count=1,max;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	for(int i=0;i<size;i++){
		if(a[i]>a[i+1]){
			max=a[i];
			a[i]=a[i+1];
			a[i+1]=max;
			i=-1;
		}
	}
	for(int i=0;i<size;i++){
		if(a[i]<=count){
			count+=a[i];
		}
	}
	cout<<count;
	return 0;
}