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
		void dispaly(){
			cout<<real<<"+i"<<imag<<endl;
		}
		friend complex operator+(complex c1,complex c2){
			complex temp;
			temp.real=c1.real+c2.real;
			temp.imag=c1.imag+c2.imag;
			return temp;
		}
};
int main(){
	complex c1(2.2,9.4);
	complex c2(5.8,4.8);
	complex c3;
	c3=c1+c2;
	cout<<"c1 value is ";
	c1.dispaly();
	cout<<"c2 value is ";
	c2.dispaly();
	cout<<"c3 value is ";
	c3.dispaly();
}
