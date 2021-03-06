#include "depth.h"

// Edit the code here to change maze file.
#define MAZE_FILE "maze.txt"

Maze Depth::exitTheMaze(Maze& M, char last_node) {
	n++;
	//Current rows and cols, stored locally for each call 
	int cur_row;
	int cur_col;


	//get out current location using method in maze.cpp.
	M.getCurrentLocation(cur_col, cur_row);
	if (beenThere(cur_row, cur_col)){

		//if we've been here, we need to back up, call backup
		backUp(M, last_node);

		//backs out of current direction, returning to previous position.
		return M;
	}
	
	//if we haven't been here before, add new location to vectors and move on. 
	col.push_back(cur_col);
	row.push_back(cur_row);
	

	//after adding position to vector, lets check which direction we can go, and go there. 
	//after going there, we add the direction to our seq of directions and we call the method over again.
	if (!M.isFinish()) {
		if (!M.isFinish() && last_node != 'n' && M.north()){
			seq.push_back('n');
			exitTheMaze(M, 's');
		}
		if (!M.isFinish() && last_node != 'e' && M.east()){
			seq.push_back('e');
			exitTheMaze(M, 'w');
		}
		if (!M.isFinish() && last_node != 's' && M.south()){
			seq.push_back('s');
			exitTheMaze(M, 'n');
		}
		if (!M.isFinish() && last_node != 'w' && M.west()) {
			seq.push_back('w');
			exitTheMaze(M, 'e');
		}


		//if we can't go any direcion, we need to back up, call backup
		if (!M.isFinish()){
			backUp(M, last_node);
			return M;
		}
	}
	return M;
}

//Have we been to current location.
bool Depth::beenThere(int cur_row,int cur_col){
	int i;
	for (i = 0; i < col.size(); i++){
		if (col.at(i) == cur_col && row.at(i) == cur_row){
					return true;
				}
			}
	return false;
}

//Do we need to backup? Returns M and last_node by reference as to change the value in its current state. 
void Depth::backUp(Maze& M, char& last_node){
	n--;
	//if we back up, popoff the last move
	seq.pop_back();
	switch (last_node) {
	case 'n':
		M.north();
		last_node = 's';
		break;
	case 'e':
		M.east();
		last_node = 'w';
		break;
	case 's':
		M.south();
		last_node = 'n';
		break;
	case 'w':
		M.west();
		last_node = 'e';
		break;
	}
}