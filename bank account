#include<iostream>
using namespace std;
class bank{
	char name[60],account_type[10];
	int acno;
	float balance;
	public:
		void init();
		void deposit();
		void withdrawal();
		void disp_det();
};
void bank::init(){
	cout<<"---Initializing the bank account---"<<endl;
	cout<<"enter the name of the account holder";
	cin>>name;
	cout<<"Enter the account type";
	cin>>account_type;
	cout<<"Please enter your account number";
	cin>>acno;
	cout<<"enter the amount that you would like to deposit";
	cin>>balance;
}
void bank::deposit(){
	float add_balance;
	cout<<"---Depositing the money---"<<endl;
	cout<<"enter the amount to deposit in your account";
	cin>>add_balance;
	balance+=add_balance;
	cout<<"balance is :"<<balance<<endl;
}
void bank::withdrawal(){
	float amount;
	cout<<"---With drarwing the amount---"<<endl;
	cout<<"enter the amount to withdraw";
	cin>>amount;
	balance-=amount;
	cout<<"The remaining balance in your account is:"<<balance<<endl;
}
void bank::disp_det(){
	cout<<"displaying the account details ";
	cout<<"the name of the account holder is"<<name<<endl;
	cout<<"account type:"<<account_type;
	cout<<"Account number is:"<<acno<<endl;
	cout<<"balnce is:"<<balance<<endl;
}
int main(){
	bank b;
	int choice=1;
	while (choice!=0){
		cout<<"Enter 0 to exit"<<endl;
		cout<<"1 to initialize bank account"<<endl;
		cout<<"2 to deposit"<<endl;
		cout<<"3 to withdraw:"<<endl;
		cout<<"4 to get your account details"<<endl;
		cin>>choice;
		switch(choice){
			case 0:
				cout<<"exiting the program";
				break;
			case 1:
				b.init();
				break;
			case 2:
				b.deposit();
				break;
			case 3:
				b.withdrawal();
				break;
			case 4:
				b.disp_det();
				break;
			default :
				cout<<"ILLEGAL ENTRY"<<endl;
		}
	}
}
