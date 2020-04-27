#include <iostream>
using namespace std;

int global = 54;
void function1(int x)
{
	int local1 = 10;
	local1 += global;
	cout<<"from function1: "<<local1<<endl;
	cout<<x<<endl;
}
int main(int argc, char** argv) {
	
	int local2 = 3;
	local2 += global;
	cout<<"from main: "<<local2<<endl;
	function1(100);
	return 0;
}
