#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	double principal{500};
	double rate {.02};
	double time {5};

	double interest;
	interest = principal*rate*time;
	
	cout<<interest<<endl;
	
	return 0;
}
