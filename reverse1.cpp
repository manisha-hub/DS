#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter size of the array"<<endl;
	cin>>size;
	int a[size],c;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	for(int i=0;i<size/2;i++){
		c=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=c;
	}
	cout<<"Reverse of the given arrray "<<endl;
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";

	}
	return 0;
}