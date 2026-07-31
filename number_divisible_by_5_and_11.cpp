#include <iostream>
using namespace std;
int main()
{	
	int number;
	cout<<"Enter_a_number= ";
	cin>>number;
	
	if((number%5==0)&&(number%11==0))
	{ cout<<"This number is divisible by both 5 and 11 ";
	}
	
	else
	{ cout<<"This number is not divisible by both 5 and 11";
	}
}
