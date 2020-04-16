#include<iostream>
using namespace std;
int main(){
int persons,tickets,d_km,age,total_price,t_price,price_of_person;
persons=1,total_price=0;
char choice='y';
while(choice=='y'||choice=='Y'){
	persons=1,total_price=0;
	cout<<"How much distance do you travel?"<<endl;
	cin>>d_km;
	cout<<"how many tickets are travelling ?"<<endl;
	cin>>tickets;
	cout<<"number of tickets :"<<tickets<<endl;
	if(d_km>5 and d_km<9)
	t_price=10;
	else if(d_km>10 and d_km<18)
	t_price=15;
	else if(d_km>19 and d_km<24)
	t_price=20;
	else if(d_km>25 and d_km<30)
	t_price=24;
	else if(d_km>31 and d_km<38)
	t_price=29;
	else if(d_km>39 and d_km<44)
	t_price=34;
	else if(d_km>45 and d_km<55)
	t_price=45;
	else if(d_km>56 and d_km<60)
	t_price=55;
	else if(d_km>61 and d_km<70)
	t_price=65;
	else if(d_km>71 and d_km<80)
	t_price=75;
	else if(d_km>81)
	t_price=100;
	else 
	t_price=6;
	while(tickets>=persons){
		cout<<"enter the age of a persons"<<persons<<":";
		cin>>age;
		if(age<5)
		price_of_person=0;
		else if(age>=5 and age<=14)
		price_of_person=t_price*0.6;
		else
		price_of_person=t_price;
		total_price+=price_of_person;
		persons++;
	}
	cout<<"total price:"<<total_price;
	cout<<"Do you want to execute again (y/n)?";
	cin>>choice;
}
}
