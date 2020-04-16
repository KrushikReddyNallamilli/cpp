#include<iostream>
using namespace std;
inline int square (int x){
	return(x*x);
}
inline int cube (int x){
	return(x*x*x);
}
int main(){
	int a;
		cout<<"Enter the value of a";
		cin>>a;
		cout<<"the value of a is :"<<a;
		cout<<"the square of given number is "<<square(a)<<endl;
		cout<<"the cube of given number is :"<<cube(a)<<endl;
}
