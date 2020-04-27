#include <iostream>
#include <string>
using namespace std;

/*** There's more than one ways to skin a cat ***/

int main(int argc, char** argv) {
	
	string rainbow[7];
	string rainbow2[] = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};

	rainbow[0]="red";
	rainbow[1]="orange";
	rainbow[2]="yellow";
	rainbow[3]="green";
	rainbow[4]="blue";
	rainbow[5]="indigo";
	rainbow[6]="violet";

	for(int i = 0;i<7;i++)
	{
		cout<<rainbow[i]<<" ";
		cout<<endl;
	}
	
	cout<<"--------"<<endl;

	for(string s:rainbow2)
	{
		cout<<s<<" ";
		cout<<endl;
	}

	return 0;
}
