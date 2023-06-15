#include<iostream>
using namespace std;
int main(){
	double num1,num2;
	cout<<" Enter the number_1: ";cin>>num1;
	cout<<" Enter the number_2: ";cin>>num2;
	char c;
	cout<<"Enter any operator: ";
	cin>>c;
	if(c=='+' ){
		cout<<"The plus operator is used. "<<num1+num2;
	}
	else if(c=='-'){
		cout<<"The minus operator is used. "<<num1-num2;
	}
	else if(c=='*'){
		cout<<"The multiply operator is used. "<<num1*num2;
	}
	else if(c=='/'){
		cout<<"The division operator is used. "<<num1/num2;
	}
	 
}
