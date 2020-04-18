#include<iostream>
#include<math.h>
using namespace std;
int power (int,int);
double power (int,double);
int main(){
	int a,b,x;
	double y;
	cout<<"enter the value of a,b:";
	cin>>a>>b;
	cout<<"enter the value of x,y";
	cin>>x>>y;
	cout<<"the power of a,b to the base a is :"<<power(a,b)<<endl;
	cout<<"the power of x,y to the base x is :"<<power(x,y)<<endl;
}
int power(int a, int b){
	return pow(a,b);
}
double power(int x,double y){
	return pow(x,y);
}

