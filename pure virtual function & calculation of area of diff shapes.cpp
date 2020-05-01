#include<iostream>
using namespace std;
class shape{
	protected:
		float l;
		public:
			void getdata(){
				cin>>l;
			}
			virtual float area()=0;
};
class square:public shape{
	public:
	float area(){return l*l;}
};
class circle:public shape{
	public:
	float area() {return 3.14*l*l;}
};
int main(){
	square s;
	circle c;
	cout<<"Enter the side of the square :";
	s.getdata();
	cout<<"the area of the square is :"<<s.area()<<endl;
	cout<<"Enter the radius of the circle  :";
	c.getdata();
	cout<<"the area of the circle is :"<<c.area()<<endl;
}

