//write a C++ program that take four functions that gets two integer and returns  its sum,subtraction,multiplication,division
#include<iostream>
using namespace std;
int sum(int x,int y){
	return x+y;
}
int subtraction(int x,int y){
	return (x-y);
}
int multiplication(int x,int y){
	return (x*y);
}
float division(int x,int y){
	return (x/y);
}
int main(){
	int n1,n2;
	cout<<"Enter two integer:"<<endl;
	cin>>n1>>n2;
	cout<<"Sum:"<<sum(n1,n2)<<endl;
	cout<<"Subtraction:"<<subtraction(n1,n2)<<endl;
	cout<<"Multiplication:"<<multiplication(n1,n2)<<endl;
	cout<<"Division:"<<division(n1,n2)<<endl;
	return 0;
}
