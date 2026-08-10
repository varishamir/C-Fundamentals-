#include <iostream>
using namespace std;
int factorial(int a)
{
	int result=1;
	for(int i=a; i>=1; --i)
	{
		result=i*result;
	}
	return result;
}
int main(){
	int a;
	cout<<"Enter number for factorial= ";
	cin>>a;
	cout<<"Factorial of number "<<a<<" is "<<factorial(a);
}
