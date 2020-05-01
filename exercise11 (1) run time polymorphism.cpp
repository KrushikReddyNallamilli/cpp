#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(){a=1;
		}
		virtual void show(){
			cout<<"a="<<a;
		}
};
class B:public A{
	int b;
	public:
		B(){b=13;
		}
		virtual void show(){
			cout<<"\tb="<<b;
		}
};
int main(){
	A *bptr;
	A a;
	bptr=&a;
	bptr->show();
	B b;
	bptr=&b;
	bptr->show();
}
