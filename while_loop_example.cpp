#include <iostream>
using namespace std;
int main()
{
	int num, count=0, sum;
	
	cout<<"enter_a_number= ";
	cin>>num;
	
	sum=num;
	
	while(num!=0)
	{
		cout<<"enter_a_number= ";
		cin>>num;
		sum=sum+num;

		count++;
	}
	
	cout<<"Exited due to zero!"<<endl;
	cout<<"count= "<<count<<endl;
	cout<<"sum of numbers entered= "<<sum;
}
