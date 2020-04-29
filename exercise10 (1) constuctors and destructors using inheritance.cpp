#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"class A constructor is executed"<<endl;
		}
		~A(){
			cout<<"class A destructor is executed"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"class B constructor is executed"<<endl;
		}
		~B(){
			cout<<"class B destructor is executed"<<endl;
		}
};
class C:public B{
	public:
		C(){
			cout<<"class C constructor is executed"<<endl;
		}
		~C(){
			cout<<"class C destructor is executed"<<endl;
		}
};
int main(){
	C c;
	return 0;
}
