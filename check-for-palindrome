#include <iostream>
#include <string>
using namespace std;
int main(){
	string input, L, R;
	int length=0;
	int count=0;
	
	cout<<endl<<"\t *******Check Palindrome************"<<endl;
	cout<<endl<<"You can check for words, digits or symbols"<<endl;
	cout<<"\n Enter Input: ";
	cin>>input;
	
	length= input.length();
	
	for(int i=0; i<length; i++){
		L = input[i];
		R = input[length-(i+1)];
		if( L == R ){
			count++;
		}
	}
	
	if(count == length){
		cout<<"It is a PALINDROME.";
	}
	
	else{
		cout<<"It is not a PALINDROME.";
	}
}
