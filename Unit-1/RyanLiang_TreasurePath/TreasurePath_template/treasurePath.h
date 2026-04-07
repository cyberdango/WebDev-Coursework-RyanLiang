#ifndef TREASUREPATH_H_INCLUDED
#define TREASUREPATH_H_INCLUDED

const int COLS = 5;

int maximumTreasure(int treasure[][COLS], int collection[][COLS], int rows);
/*
   Finds the maximum treasure path from any cell in the top row
   to any cell in the bottom row.

   Parameters:
     treasure[][COLS] - the treasure map (rows x COLS)
     collection[][COLS] - output array; mark cells on the optimal path
     rows - number of rows in both arrays

   Returns: total value of the optimal path
*/

int maximumParent(int arr[][COLS], int rNum, int cNum);
/*
   Helper function: finds the maximum value from the possible
   parent cells (up-left, up, up-right) of cell [rNum][cNum].

   Parameters:
     arr[][COLS] - array of accumulated path values
     rNum - current row
     cNum - current column

   Returns: maximum value among valid parent cells
*/

bool test_treasure_paths();
/*
   Tests the treasure path algorithm with the provided test arrays.
   Returns true if all tests pass, false otherwise.
*/

#endif // TREASUREPATH_H_INCLUDED
