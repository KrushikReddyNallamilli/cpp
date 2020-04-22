#include<iostream>
using namespace std;
class number{
	public:
		int x;
		void getdata(){
			cout<<"Enter a number :";
			cin>>x;
		}
		void showdata(){
			cout<<"the minimum of given two numbers :"<<x;
		}
		number min(number n2){
			if(n2.x<x)
			return n2;
			else
			return *this;
		}
};
int main(){
	number n,n1,n2;
	n1.getdata();
	n2.getdata();
	n=n1.min(n2);
	n.showdata();
}
