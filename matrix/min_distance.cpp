// we have to find the minimum number of cells to visit the required cell in a matrix.
// we can't visit 0 value cells.

#include <bits/stdc++.h>
using namespace std;

int min_dist(int arr[][3], int row, int col, std::map<std::pair<int, int>, int> visited)
{
    std::pair<int, int> cell;
    int res;
    cell = make_pair(row, col);
    if (arr[cell.first][cell.second] == 9)
    {
        visited[cell] = 1;
        res = 0;
    }
    else if (visited.find(cell) == visited.end() && cell.first >= 0 && cell.first < 3 && cell.second >= 0 && cell.second < 3 && arr[cell.first][cell.second] == 1)
    {
        visited[cell] = 1;
        res = 1 + min(min(min_dist(arr, row + 1, col, visited), min_dist(arr, row - 1, col, visited)), min(min_dist(arr, row, col + 1, visited), min_dist(arr, row, col - 1, visited)));
    }
    else
    {
        visited[cell] = 1;
        res = INT_MAX;
    }

    return res;
}

int main()
{
    int arr[][3] = {{1, 1, 1}, {1, 0, 1}, {1, 9, 1}};
    std::map<std::pair<int, int>, int> visited;
    cout << min_dist(arr, 0, 0, visited);
    return 0;
}