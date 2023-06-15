#include<iostream>
using namespace std;
int main(){
	int customer_id;
	string name;
	double units_consumed;
	int bill;
	cout<<"Enter the customer id: ";
	cin>>customer_id;
	cout<<"Enter the customer name: ";
	cin>>name;
	cout<<"Enter the units consumed: ";
	cin>>units_consumed;
	if((units_consumed>=1&&units_consumed<=199)){
		bill=units_consumed*5;
		cout<<"The bill is "<<bill;
	}
	if((units_consumed>=200&&units_consumed<=399)){
		bill=units_consumed*10;
		cout<<"The bill is "<<bill;
	}
	if((units_consumed>=400&&units_consumed<=599)){
		bill=units_consumed*15;
		cout<<"The bill is "<<bill;
	}	
	if((units_consumed>=600)){
		bill=units_consumed*20;
		cout<<"The bill is "<<bill;
	}
	if((units_consumed<=0)){
		cout<<"The units can't be negative nor zero. ";
	}
}
