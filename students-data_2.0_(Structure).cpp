#include <iostream>
using namespace std;
struct students{
	string name;
	string rollNo;
	int marks;
};
int main(){
	students details[3]={{"Aliya", "2k26/IT/23", 100}, {"Rida", "2k26/IT/24", 99}, {"Amna", "2k26/IT/25", 94}};
	cout<<"Student 1 details"<<endl;
	cout<<"Name: "<<details[0].name<<endl;
	cout<<"Roll number: "<<details[0].rollNo<<endl;
	cout<<"Marks: "<<details[0].marks<<endl<<endl;
	
	cout<<"Students 2 details"<<endl;
	cout<<"Name: "<<details[1].name<<endl;
	cout<<"Roll number: "<<details[1].rollNo<<endl;
	cout<<"Marks: "<<details[1].marks<<endl<<endl;
	
	cout<<"Students 3 details"<<endl;
	cout<<"Name: "<<details[2].name<<endl;
	cout<<"Roll number: "<<details[2].rollNo<<endl;
	cout<<"Marks: "<<details[2].marks<<endl;
}
