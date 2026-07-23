#include <iostream>
#include <string>
using namespace std;
struct Rect{
	float length;
	float width;
};
int main(){
	Rect R1;
	cout<<"Area of rectangle"<<endl;
	cout<<"Enter length= ";
	cin>>R1.lenght;
	cout<<"Enter width= ";
	cin>>R1.width;
	float Area=R1.length*R1.width;
	cout<<"Area of rectangle= "<<Area;
}

