#include<iostream>
using namespace std;
class number{
	int x,y;
	public:
		number(){
			x=0;
			y=0;
		}
		number (int m,int n){
			x=m;
			y=n;
		} 
		void display(){
			cout<<"x="<<x<<"\tY="<<y<<endl;
		}
		friend number operator -(number &n);
};
number operator-(number &n){
	n.x=-n.x;
	n.y=-n.y;
	return n;
}
int main(){
	number n1(4,9),n2;
	n1.display();
	n2=-n1;
	n2.display();
}
