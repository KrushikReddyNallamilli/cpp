#include<iostream>
using namespace std;
class complex{
	float real;
	float imag;
	public:
		complex(){
			real=0;
			imag=0;
		}
		complex(float r,float i){
			real=r;
			imag=i;
		}
		complex operator+(complex c){
			complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
		void dispaly(){
			cout<<real<<"+i"<<imag<<endl;
		}
};
int main(){
	complex c1(3.2,2.4);
	complex c2(5.9,4.3);
	complex c3;
	c3=c1+c2;
	cout<<"c1 value is ";
	c1.dispaly();
	cout<<"c2 value is ";
	c2.dispaly();
	cout<<"c3 value is ";
	c3.dispaly();
}
