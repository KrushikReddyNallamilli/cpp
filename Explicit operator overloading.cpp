#include<iostream>
using namespace std;
class number{
	int x;
	public:
		number (int a){
			x=a;
		}
		void display(){
		cout<<x;
	}
	void operator=(number y){
		x=y.x;
	}
};
int main(){
	number n1(7),n2(62);
	cout<<"-----Explicit overloading-----\n";
	cout<<"before overloading = operator\n";
	cout<<"n1=";
	n1.display();
	cout<<" n2=";
	n2.display();
	cout<<"\nafter overloading = operator\n";
	n2=n1;
	cout<<"n1=";
	n1.display();
	cout<<" n2=";
	n2.display();
}
