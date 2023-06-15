#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter the num1: ";
	cin>>num1;
	cout<<"Enter the num2: ";
	cin>>num2;
	cout<<"Enter the num3: ";
	cin>>num3;
	if((num1>num2)&&(num1>num3)){
		cout<<"The num1 is the greatest of all. ";
	}
	else if((num2>num1)&&(num2>num3)){
		cout<<" The num2 is the greatest of all. ";
	}
	else if((num3>num1)&&(num3>num2)){
		cout<<" The num3 is the reatest of all. ";
	}
}
