#include <bits/stdc++.h>
using namespace std;

bool rat_maze(int maze[5][5], std::pair<int,int> origin = {0,0}, std::pair<int,int> prev = {-1,-1})
{
	bool right,down,left,top;
	std::pair<int,int> temp;

	if(origin == make_pair(4,4))
	{
		return true;
	}

	if(maze[origin.first][origin.second] == 0)
	{
		return false;
	};

	if(origin.first >= 0 && origin.first < 5 && origin.second >= 0 && origin.second < 5)
	{
		right = make_pair(origin.first, origin.second+1) != prev ? rat_maze(maze, {origin.first,origin.second+1}, origin) : false;
		if(right)
		{
			return true;
		}

		down = make_pair(origin.first+1, origin.second) != prev ? rat_maze(maze, {origin.first+1,origin.second}, origin) : false;
		if(down)
		{
			return true;
		}

		left = make_pair(origin.first, origin.second-1) != prev ? rat_maze(maze, {origin.first,origin.second-1}, origin) : false;
		if(left)
		{
			return true;
		}

		top = make_pair(origin.first-1, origin.second) != prev ? rat_maze(maze, {origin.first-1,origin.second}, origin) : false;
		if(top)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	//------------------------------------test-input-------------------------------------------------------
	int maze[5][5] = {{1, 0, 1, 0, 1}, {1, 1, 1, 1, 1}, {0, 1, 0, 1, 0}, {1, 0, 0, 1, 1}, {1, 1, 1, 0, 1}};
	//-----------------------------------------------------------------------------------------------------

	cout << rat_maze(maze) << endl;

	return 0;
}
