#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number: ";cin>>num;
	if(num<0){
		cout<<"The number is negative. "; 
	} 
	else if(num>0){
		cout<<" The number is positive. ";
	}
	else if(num==0){
		cout<<" The number is zero. ";
	}
}
