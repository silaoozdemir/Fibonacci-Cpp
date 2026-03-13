#include<iostream>
using namespace std;
int main(){
	int num1=0, num2=1,num3;
	cout<<"Fibonacci sequence: ";
	for(int i=1; i<=10;i++){
		cout<<num1<<" ";
		num3=num1+num2;
		num1=num2;
		num2=num3;
	}
	return 0;
}
