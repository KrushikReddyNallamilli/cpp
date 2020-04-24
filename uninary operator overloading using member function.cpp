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
		void operator-(){
			x=-x;
			y=-y;
			
		}
};
int main(){
	number n(4,9);
	n.display();
	-n;
	n.display();
}
