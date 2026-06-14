#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double r;
	cout<<"Enter the radius of circle:"<<endl;
	cin>>r;
	if(r>0){
		cout<<"The area of the circle:"<<M_PI * r*r<<endl;
		cout<<"The perimeter of the circle:"<<2*M_PI*r;
	} else{
		cout<<"The area cannot be calculated since the radius is negative"	;
	}
}
