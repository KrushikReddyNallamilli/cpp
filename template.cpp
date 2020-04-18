#include<iostream>
#include<math.h>
using namespace std;
template<class T>
T power(T a,T b){
	return pow(a,b);
}
int main(){
	cout<<"\n \n28 power 3 value is:";
	cout<<power(28,3);
	cout<<"\n2 power 15.3 value is: ";
	cout<<power(2.4,4.3);
}
