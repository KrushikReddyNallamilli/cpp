#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int arm,n,temp,rem;
	cout<<"Enter a number";
	cin>>n;
	temp=n;
	while(n>0){
		rem=n%10;
		arm=arm+pow(rem,3);
		n=n/10;
	}
	if(temp==arm){
		cout<<"Given number is  an armstrong number";
	}
	else{
		cout<<"not an armstrong number";
	}
}
