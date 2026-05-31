#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ofstream file1;
	ifstream file2;
	string details;
	file1.open("file1.txt"); // add the address of your local machine in the form of "C:\\address\\file1.txt"
	file2.open("file2.txt"); // use the format txt only for file
	getline(file2, details);
	file1 << details;
	cout<<details;
	file1.close();
	file2.close();
}
