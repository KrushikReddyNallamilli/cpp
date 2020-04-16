#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float p,r,si,ci;
	int t;
	cout<<"enter the principle amount=";
	cin>>p;
	cout<<"enter the rate of interest ";
	cin>>r;
	cout<<"enter the time t=";
	cin>>t;
	si=((p*t*r)/100);
	cout<<"simple interest is SI="<<si;
	ci=p*pow((1+(r/100)),t)-p;
	cout<<"\n compoun interest is CI="<<ci;
	if(ci>si)
	cout<<"\n bank is benefited by compound interest";
	else
	cout<<"\n bank is benefited by simple interest";
}
