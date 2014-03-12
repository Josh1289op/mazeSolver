#include"maze.h"

// Edit the code here to change maze file.
#define MAZE_FILE "fun.txt"
/*
int main(){
	Maze M;
	M.ReadMaze(MAZE_FILE);
	cout<<"This is the maze."<<endl;
	cout << M;
	M.getStart();
	int x, y;
	M.getCurrentLocation(x,y);
	cout<<"Get started! Now you are @ ("<<x<<","<<y<<")"<<endl;

	cout << M;


	char s;
	while(!M.isFinish())
	{
		cout<<"Please select a direction to travel from the following - N, S, W or E:  ";
		cin>>s;
		while(!(s=='N'||s=='n'||s=='W'||s=='w'||s=='E'||s=='e'||s=='S'||s=='s'))
		{
			cout<<"Invalid input! Please input again!";
			cin>>s;
		}

		if(s=='N'||s=='n')
		{
			if(M.north())
			{
				M.getCurrentLocation(x,y);
				cout<<"March north! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
			else
			{
				M.getCurrentLocation(x,y);
				cout<<"Could not move in that direction! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
		}
		if(s=='E'||s=='e')
		{
			if(M.east())
			{
				M.getCurrentLocation(x,y);
				cout<<"March east! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
			else
			{
				M.getCurrentLocation(x,y);
				cout<<"Could not move in that direction! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
		}
		if(s=='W'||s=='w')
		{
			if(M.west())
			{
				M.getCurrentLocation(x,y);
				cout<<"March west! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
			else
			{
				M.getCurrentLocation(x,y);
				cout<<"Could not move in that direction! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
		}
		if(s=='S'||s=='s')
		{
			if(M.south())
			{
				M.getCurrentLocation(x,y);
				cout<<"March south! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
			else
			{
				M.getCurrentLocation(x,y);
				cout<<"Could not move in that direction! Now you are @ ("<<x<<","<<y<<")"<<endl;
				cout << M;
			}
		}
	}
	cout<<"Congratulations - destination reached!"<<endl;
	return 0;
}
*/