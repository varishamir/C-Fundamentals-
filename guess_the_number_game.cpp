#include <iostream>
#include <chrono>
#include <random>
using namespace std;
int main(){
	mt19937 gen(std::chrono::system_clock::now().time_since_epoch().count());
	uniform_int_distribution<int> distrib(1, 100);
	
	int secret_number = distrib(gen); 
	
	//cout<<secret_number;    [remove this comment out if you want to see what number your computer has guessed and remove this line as well in brakets]
	
	cout<<"============GUESS THE NUMBER=========="<<endl;
	cout<<"	  (From 1 to 100)"<<endl<<endl;
	
	int number;
	cout<<"Enter the number: ";
	cin>>number; 
	
	while(number != secret_number){
		
		int difference;
		if(number > secret_number){
			difference = number - secret_number;
		}
		
		else{
			difference = secret_number - number;
		}
		
		if(difference >= 1 && difference <= 10){
			cout<<"Too Close!!"<<endl;
			
			if(secret_number > number){
				cout<<"Above this number"<<endl;
			}
			else{
				cout<<"Below this number"<<endl;
			}
		}
		
		else if(difference >10 && difference <=30){
			cout<<"Close"<<endl;
			
			if(secret_number >number){
				cout<<"Above this number"<<endl;
			}
			else{
				cout<<"Below this number"<<endl;
			}
		}
		
		else if(difference >30 && difference <=60){
			cout<<"Not too Close"<<endl;
			
			if(secret_number > number){
				cout<<"Above this number"<<endl;
			}
			
			else{
				cout<<"Below this number"<<endl;
			}
		}
		
		else{
			cout<<"Far away!!"<<endl;
			
			if(secret_number > number){
				cout<<"Above this number"<<endl;
			}
			else{
				cout<<"Below this number"<<endl;
			}
		}
		
		cout<<"Enter the number: ";
		cin>>number;
	}
	cout<<"==============================================//"<<endl;
	cout<<"you have guessed the number correctly!!!";
	
}
