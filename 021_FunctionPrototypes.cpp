#include <iostream>
using namespace std;

double principal{0};
double rate {0};
double timp {0};
//prototypes/function signatures for my functions
void getValues();
double getInterest();
	
int main(int argc, char** argv) {
	
	getValues();
	double interest = getInterest();
	cout<<"The amount of interest earned is $"<<interest<<endl;

	
	return 0;
}
void getValues()
{
	cout<<"Enter principal: ";
	cin>>principal;
	cout<<"Enter rate (.99): ";
	cin>>rate;
	cout<<"Duration: ";
	cin>>timp;
	
}
double getInterest()
{
	double interest;
	interest = principal*rate*timp;
	return interest;
}
