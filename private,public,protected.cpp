#include<iostream>
using namespace std;
class check{
	private:
		int number;
		void even(){
			cout<<"Inside the private section ";
			cout<<"enter the number"<<endl;
			cin>>number;
			if(number%2==0)
			cout<<"the given number is even"<<endl;
			else
			cout<<"the given number is odd"<<endl;
		}
	public:
		int number2;
		void positive(){
			even();
			cout<<"Inside the public section"<<endl;
			cout<<"enter a number"<<endl;
			cin>>number2;
			if(number2>0)
			cout<<"The entered number is positive"<<endl;
			else
			cout<<"the entered number is not positive"<<endl;
			equal();
	}
	protected :
		void equal(){
			int number3,number4;
			cout<<"---Inside the protected---"<<endl;
			cout<<"enter two numbers:";
			cin>>number3>>number4;
			if(number3==number4){
				cout<<"both the numbers are equal"<<endl;
			}
			else
			cout<<"the entered numbers are not equal"<<endl;
		}
};
int main(){
	check c;
	c.positive();
//	c.even();
//	c.equal();
}
