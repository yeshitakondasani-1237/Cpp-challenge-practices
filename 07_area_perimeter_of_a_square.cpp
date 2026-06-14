#include<iostream>
using namespace std;
int main(){
	float a;
	cout<<"Enter the side of the square:"<<endl;
	cin>>a;
	if(a>0){
		cout<<"The area of the square is:"<<a*a<<endl;
		cout<<"The perimeter of the square is:"<<4*a;
	} else {
		cout<<"The area and perimeter can't be calculated because the side given is negative";
	}
}
