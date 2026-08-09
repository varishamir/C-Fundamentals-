#include <iostream>
using namespace std;
int main(){
	int arr[5];
	int n = 5;
	int temporary=0;
	cout<<" Enter Array( with space between digits ): ";
	
	for(int l=0; l<5; l++){
		cin>>arr[l];
	}
	
	cout<<endl<<"=========+Entered Array+======="<<endl;
	for(int m=0; m<5; m++){
		cout<<arr[m]<<" ";
	}
	
	for(int i=0; i<4; i++){
		for(int j=1; j <= 4-i; j++){
			if(arr[i] > arr[i+j]){
			temporary = arr[i];
			arr[i] = arr[i+j];
			arr[i+j] = temporary;
			}
		}
	}

	cout<<endl<<endl<<"========+Sorted Array+======"<<endl;
	for(int k=0; k<5; k++){
		cout<<arr[k]<<" ";
	} 
}
