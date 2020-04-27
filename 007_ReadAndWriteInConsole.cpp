#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
	string name;
	int year;
	cout<<"Enter the year you were born, and your full name: ";
	cin>>year;
	cin.ignore(); //ignores a \n 
	getline(cin,name);
	//cout<<"Enter your full name: ";
	//cin>>name;
		
	cout<<name<<", you will be "<<2017 - year<<" years old this year."<<endl;
	return 0;
}
