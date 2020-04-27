#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int totalGoals=0;
	int goals, game = 1, numGames=0;

	cout<<"How many games did you play this season?";
	cin>>numGames;

	for(int i = 0; i<numGames;i++)
	{
		cout<<"Enter goals for game "<<game<<":";
		cin>>goals;
		if(goals < 0)
		{
			break;
		}
		totalGoals += goals;
		game++;
	}
	cout<<"The total goals for your team this season was: "<<totalGoals<<endl<<"__"<<endl;
	return 0;
}
