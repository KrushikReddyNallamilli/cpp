#include<iostream>
using namespace std;
class Distance{
	int feet,inches;
	public:
		void read_distance();
		Distance sum_distance();
		Distance sum_distance(Distance);
		Distance sum_distance(Distance,Distance);
		void show_distance();
};
void Distance::read_distance(){
	cout<<"Enter the distance in feet and inches";
	cin>>feet>>inches;
}
Distance Distance::sum_distance(){
	Distance d1,d2,d3;
	cout<<"overloading sum distance with zero(0) operators"<<endl;
	d1.read_distance();
	d1.show_distance();
	d2.read_distance();
	d2.show_distance();
	d3.feet=d1.feet+d2.feet;
	d3.inches=d1.inches+d2.inches;
	return d3;
}
Distance Distance::sum_distance(Distance d1){
	Distance d2,d3;
	cout<<"overloading sum distance with one(1) operators"<<endl;
	d2.read_distance();
	d2.show_distance();
	d3.feet=d1.feet+d2.feet;
	d3.inches=d1.inches+d2.inches;
	return d3;
}
Distance Distance::sum_distance(Distance d1,Distance d2){
	Distance d3;
	cout<<"overloading sum distance with two(2) operators"<<endl;
	d3.feet=d1.feet+d2.feet;
	d3.inches=d1.inches+d2.inches;
	return d3;
}
void Distance::show_distance(){
	cout<<"Distance is :"<<feet<<"feet"<<" and "<<inches<<"inches"<<endl;
}
int main(){
	Distance ob1,ob2,ob3,ob4,ob5,ob6;
	cout<<"\n-----inside main function-----"<<endl;
	ob1=ob1.sum_distance();
	ob1.show_distance();
	cout<<"-----inside main function-----"<<endl;
	ob2.read_distance();
	ob2.show_distance();
	ob3=ob3.sum_distance(ob2);
	ob3.show_distance();
	cout<<"-----Inside the main function-----"<<endl;
	ob4.read_distance();
	ob4.show_distance();
	ob5.read_distance();
	ob5.show_distance();
	ob6=ob6.sum_distance(ob4,ob5);
	ob6.show_distance();
}
