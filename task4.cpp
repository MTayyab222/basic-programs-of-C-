#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number: ";
	cin>>num;
	if(num==0){
		cout<<"neither even nor odd"; 
	}
	else if((num%2)==0){
		cout<<"even";
	 
	}
	else if((num%3)==0){
		cout<<"odd"; 
	} 
}
