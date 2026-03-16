#include <iostream>
#include <string>
using namespace std;
int digit(string number){
	int sum=0;
	int length=number.length();
	for(int i=0; i<length; ++i){
		sum=sum+(number[i]-'0');
	}
	return sum;
}
int main(){
	string number;
	cout<<"Enter a number= ";
	cin>>number;
	cout<<"The sum of digits in number "<<number<<" is "<<digit(number);
}
