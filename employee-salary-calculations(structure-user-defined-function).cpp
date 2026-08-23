#include <iostream>
#include <string>
using namespace std;
struct employee{
	string Id;
	int salary;
};
void empsalary( employee E[5])
{
	for(int i=0; i<=4; i++)
	{
		if(E[i].salary>=30000){
		int bonus=E[i].salary+1000;
		cout<<"Bonus= "<<E[i].Id<<" "<<bonus<<endl;
		}
	}	
}
int main(){
	employee E[5]={{"A", 50000}, {"B", 40000}, {"C", 30000}, {"D", 29000}, {"E", 28000}};
	empsalary(E);
}
