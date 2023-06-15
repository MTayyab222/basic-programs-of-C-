#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<" Enter the number_1: ";
	cin>>num1;
	cout<<" Enter the number_2: ";
	cin>>num2;
	if(num1>num2){
		cout<<" first number is greater than the second one: ";
	}
	else if(num2>num1){
		cout<<" Second number is greater than the first one: ";
		
	}
	else if(num1==num1){
		cout<<" The numbers are equal: ";
	}
}
