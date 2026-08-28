#include <iostream>
#include <string>
using namespace std;
float LCM(float a, float b, float c, float d, float result){
	result= a/b + c/d;
	return result;
}
int main(){
	float a, b, c, d, result;
	cout<<"Enter numbers for LCM"<<endl;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Enter c: ";
	cin>>c;
	cout<<"Enter d: ";
	cin>>d;
	cout<<"LCM of "<<a<<"/"<<b<<" + "<<c<<"/"<<d<<" is "<<LCM(a, b, c, d, result);
}
