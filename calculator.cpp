#include <iostream>
using namespace std;
float calculator(float num1, float num2, char oper)
{
	float result;
	switch(oper){
	case '+':
			result=num1+num2; break;
	case '-':
			result=num1-num2;break;
	case '/':
			result=num1/num2;break;
	case '*':
		result=num1*num2;break;
	default:
		cout<<"Invalid character";}
	return result;
}
int main(){
	int num1, num2;
	char oper;
	cout<<"enter_1st_number= ";
	cin>>num1;
	cout<<"enter_2nd_number= ";
	cin>>num2;
	cout<<"enter_operator= ";
	cin>>oper;

	cout<<calculator(num1, num2, oper);
	}
