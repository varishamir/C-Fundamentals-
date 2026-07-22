#include <iostream>
using namespace std;
struct BankAccount{
	string AccName;
	int AccBalance;
};
int main(){
	
	BankAccount details={"104A6", 1250000};
	
	int money;
	string question;
	
	cout << "What do you want to do with money? ( Deposit/Withdraw ) ";
	cin >> question;
	
	cout << "Mention the amount of money: ";
	cin >> money;
	
	if(question == "Deposit" || question == "deposit"){
		details.AccBalance = details.AccBalance + money;
	}
	
	else{
		details.AccBalance = details.AccBalance - money;
	}
	
	cout<<endl<<"Your current balance after "<<question<<" is "<<details.AccBalance;
}
