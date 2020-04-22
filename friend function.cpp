#include<iostream>
using namespace std;
class B1;
class A1{
	public:
		int x;
		void getdata (int i){
			x=i;
		}
		friend int maximum(A1,B1);	
};
class B1{
	public:
		int y;
		void getdata (int j){
			y=j;
		}
		friend int maximum(A1,B1);	
};
int maximum(A1 a,B1 b){
	if (a.x>b.y){
		return a.x;
	}
	else{
		return b.y;
	}
}
int main(){
	A1 a1;
	B1 b1;
	a1.getdata(50);
	b1.getdata(90);
	cout<<"maximum of 50 and 90 is :";
	cout<<maximum(a1,b1);
}
