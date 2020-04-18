#include<iostream>
using namespace std;
template <class T>
void swap(T a,T b){
	cout<<"\n Before swapping ";
	cout<<" A="<<a<<"  B="<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n After swapping   ";
	cout<<"A="<<a<<"  B="<<b;
}
int main(){
	swap(14,15);
	swap(18.3,15.6);
	swap(54.36,154.65);
	swap('b','a');
	return 0;
}
