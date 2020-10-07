#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int a[size],n;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter the number you want"<<endl;
	cin>>n;
	cout<<"The pairs whose sum is equal to "<<n<<" are"<<endl;
	for(int i=0;i<size;i++){
		if(a[i]==n){
				cout<<a[i]<<" ";
			}
		for(int j=i+1;j<size;j++){
			
			if(a[i]+a[j]==n){
				cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
			}
		}
	}
	return 0;
}