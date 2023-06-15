#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter the marks: ";
	cin>>marks;
	if((marks>=90)&&(marks<=100)){
		cout<<"A1";
	}
	 else if((marks>=80)&&(marks<=89)){
		cout<<"A"; 
	}
	else if((marks>=70)&&(marks<=79)){
		cout<<"B"; 
	}
	else if((marks<=69)&&(marks>=60)){
		cout<<"C"; 
	}
	else if(marks<60){
		cout<<"F";
	}
}

