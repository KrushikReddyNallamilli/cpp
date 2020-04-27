#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B:public A{
	protected:
		int b;
};
class C {
	protected:
		int c;
};
class D:public B,C{
	public:
	int d;
	void get_data(){
		cout<<"enter the value of a,b,c and d";
		cin>>a>>b>>c>>d;
	}
	void display(){
		cout<<"The values of a,b,c and d are :"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d;		
	}
};
int main(){
	D b1;
	b1.get_data();
	b1.display();
}
