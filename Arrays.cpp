#include <iostream>
using namespace std;

int main(){

	//declaring an array whose elements are integers
	int array[3];
	
	//assigning values to each element of the array
	array[0]=7;
	array[1]=-5;
	array[2]=9;

	//printing each element of the array
	cout<<"array[0]= "<<array[0]<<endl;
	cout<<"array[1]= "<<array[1]<<endl;
	cout<<"array[2]= "<<array[2]<<endl;


	

	//declaring an array of Doubles and assigning values
	double array2[4]={2.4,4.5,7.9,2.1};

	//printing each element of the array by using a FOR-Loop
	for(int i=0;i<4;i++){
		cout<<"Element "<<i<<" = "<<array2[i]<<endl;
	}




	//declaring an array of Strings and assigning its values
	string text[3]={"apple","banana","orange"};

	//printing the string array
	for(int i=0;i<3;i++){
		cout<<"Text "<<i<<" says "<<text[i]<<endl;
	}

	//wait for the user to press ENTER
	cin.get();

	return 0;
}
