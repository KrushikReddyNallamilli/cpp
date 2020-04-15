#include<iostream>
using namespace std;
int main(){
	int ab,n,count=1;
	cout<<"enter n value";
	cin>>n;
	for(ab=2;ab<=(n/2);ab++){
		if(n%ab==0)
		count++;
	}
	if(count==1)
	cout<<"the given number is prime number";
	else
	cout<<"the given number is not a prime number";
}

