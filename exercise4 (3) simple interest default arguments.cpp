#include<iostream>
using namespace std;
float interest (long int p =20000,float t =2.5 ,float r =1.5){
	return ((p*t*r)/100);
}
int main(){
	int p;
	float t,r;
	cout<<"enter the value of p,t,r:";
	cin>>p>>t>>r;
	cout<<"THE SIMPLE INTEREST WHEN P="<<p<<"T="<<t<<"R="<<r<<" is:"<<interest(p,t,r)<<endl;
	cout<<"THE SIMPLE INTEREST WHEN P="<<p<<"T="<<t<<"R=1.5 is:"<<interest(p,t)<<endl;
	cout<<"THE SIMPLE INTEREST WHEN P="<<p<<"T=2.5"<<"R=1.5 is:"<<interest(p)<<endl;
	cout<<"THE SIMPLE INTEREST WHEN P=20000"<<"T=2.5"<<"R=1.5 is:"<<interest()<<endl;
}
