#include <iostream>
#include <string>
using namespace std;

int calculateMonths(double bal, double monthly)
{
	int months{0};

	while(bal > 0)
	{
		bal-= monthly;
		months++;
	}

	return months;
}

int main(int argc, char** argv) {

	double balance, monthlyPmt;
	
	cout<<"Enter initial loan balance: ";
	cin>>balance;
	
	cout<<"Enter monthly payment: ";
	cin>>monthlyPmt;
	
	cout<<"Your loan will be paid off in "<<calculateMonths(balance, monthlyPmt)<<" months"<<endl;

	return 0;
}
