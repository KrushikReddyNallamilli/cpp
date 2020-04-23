#include<iostream>
using namespace std;
class man{
	public:
	char name[25];
	int age;
};
int main(){
	man m={"Aditya",90};
	man *ptr;
	ptr=&m;
	cout<<"-----Normal object-----"<<endl;
	cout<<"name of the person is ";
	cout<<m.name;
	cout<<"\tage of the person is ";
	cout<<m.age;
	cout<<"\n-----Pointer object-----"<<endl;
	cout<<"name of the person is ";
	cout<<ptr->name;
	cout<<"\tage of the person is ";
	cout<<ptr->age;	
}
