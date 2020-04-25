#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B{
	protected:
		int b;
};
class C : public A , public B{
	public:
	int c;
	void get_data(){
		cout<<"enter the value of a,b and c";
		cin>>a>>b>>c;
	}
	void display(){
		cout<<"The values of a,b and c are :"<<a<<"\t"<<b<<"\t"<<c;		
	}
};
int main(){
	C b1;
	b1.get_data();
	b1.display();
}
