#include "maze.h"
#include <vector>
#include <algorithm>
#include <string>

class Depth
{	
public:
	//vectors
	vector<char> seq;
	vector<int> col;
	vector<int> row;
	
	//When finished, this variable will be changed...
	char finished = '0';

	//counter of moves, +1 for each move, -1 for each back up. 
	int n = 0;
	
	// Starting rows and Columns
	int start_row;
	int start_col;


//methods
	Maze exitTheMaze(Maze& M, char last_node);
	bool beenThere(int cur_row, int cur_col);
	void Depth::backUp(Maze& M, char& last_node);

};
