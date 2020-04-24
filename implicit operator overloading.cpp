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
};
int main(){
	number n1(5),n2(6);
	cout<<"-----Implicit overloading-----\n";
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
