#include <bits/stdc++.h>
using namespace std;

int matrix_path(int arr[][2], int row, int col, int curr_row, int curr_col)
{
    if(curr_row == row-1 && curr_col == col-1)
    {
        return 1;
    }

    int right_path{0};
    int down_path{0};
    
    if(curr_row < row-1)
    {
        down_path += matrix_path(arr, row, col, curr_row+1, curr_col);
    }
    
    if(curr_col < col-1)
    {
        right_path += matrix_path(arr, row, col, curr_row, curr_col+1);
    }
    

    return right_path+down_path; 
}

int main()
{
    //---------test_input--------
    int row{2}, col{2};
    int matrix[][2] = {{0}};
    //---------------------------
    
    cout << matrix_path(matrix,row,col,0,0) << endl; 

    return 0;
}
