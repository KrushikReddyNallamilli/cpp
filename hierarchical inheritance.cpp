#include<iostream>
using namespace std;
class vehicle{
	public:
		vehicle(){
			cout<<"It is a motor vehicle"<<endl;
		}	
};
class twowheelers:public vehicle{
	public:
	twowheelers(){
		cout<<"It has two wheels"<<endl;
	}
	void speed(){
		cout<<"maximum speed is 80 kmph. ";
	}
};
class threewheelers:public vehicle{
	public:
	threewheelers(){
		cout<<"It has three wheels"<<endl;
	}
	void speed(){
		cout<<"maximum speed is 60 kmph. ";
	}
};
class fourwheelers:public vehicle{
	public:
	fourwheelers(){
		cout<<"It has four wheels"<<endl;
	}
	void speed(){
		cout<<"maximum speed is 180 kmph. ";
	}
};
int main(){
	cout<<"---Hierarchical inheritance---"<<endl;
	twowheelers a;
	a.speed();
	cout<<"\n------------------------------"<<endl;
	threewheelers b;
	b.speed();
	cout<<"\n------------------------------"<<endl;
	fourwheelers c;
	c.speed();
}

	
