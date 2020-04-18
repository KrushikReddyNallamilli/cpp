#include<iostream>
using namespace std;
class Distance{
	int feet,inches;
	public:
	Distance sum_distance(Distance d1,Distance d2);
	void show_distance();
	Distance(){
		feet=0;
		inches=0;
	}
	Distance(int m,int n){
		feet=m;
		inches=n;
	}
	~Distance(){
		cout<<"Destructor is executed"<<endl;
	}
};
Distance Distance::sum_distance(Distance d1,Distance d2){
	Distance d3;
	d3.feet=d1.feet+d2.feet;
	d3.inches=d1.inches+d2.inches;
	return d3;
}
void Distance::show_distance(){
	cout<<"Distance is"<<feet<<"feet"<<inches<<"inches"<<endl;
}
int main(){
	Distance ob1(2,3),ob2(5,6),ob3;
	ob1.show_distance();
	ob2.show_distance();
	ob3=ob3.sum_distance(ob1,ob2);
	ob3.show_distance();
}
