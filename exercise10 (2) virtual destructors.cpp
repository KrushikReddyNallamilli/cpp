#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"In A constructor"<<endl;
		}
		virtual~A(){
			cout<<"In A destructor"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"In B constructor"<<endl;
		}
		~B(){
			cout<<"In B destructor"<<endl;
		}
};
int main(){
	A *ptr;
	ptr=new B;
	delete ptr;
}
