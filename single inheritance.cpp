#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B : public A{
	public:
	int b;
	void get_data(){
		cout<<"enter the value of a and b";
		cin>>a>>b;
	}
	void display(){
		cout<<"The values of a and b are :"<<a<<"\t"<<b;		
	}
};
int main(){
	B b1;
	b1.get_data();
	b1.display();
}
