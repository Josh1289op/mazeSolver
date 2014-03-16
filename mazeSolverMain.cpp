#include "depth.h"

// Edit the code here to change maze file.
#define MAZE_FILE "mazes/fun1.txt"

int main() {
	//making the maze object
	Maze M;
	M.ReadMaze(MAZE_FILE);

	//starting the maze, printing it.
	cout << "This is the maze and your starting point." << endl << endl;
	M.getStart();
	cout << M;

	//making the Depth object
	Depth d;
	M.getCurrentLocation(d.start_col, d.start_row);
	d.exitTheMaze(M, 0);

	//printing info
	cout << M << endl;
	string str(d.seq.begin(), d.seq.end());
	cout << "Your solution is:\n" << str << endl << endl;
	cout << "WE FINISHED IN ";
	cout << d.n;//counter
	cout << " MOVES!" << endl;
	return 0;
}