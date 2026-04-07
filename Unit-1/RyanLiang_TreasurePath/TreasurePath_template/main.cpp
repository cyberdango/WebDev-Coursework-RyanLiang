#include <iostream>
#include "treasurePath.h"

using namespace std;

// Test arrays: the path of 7s is always optimal.
// Expected maximum = 7 * number of rows.

const int TA1_ROWS = 2;
int ta1[TA1_ROWS][COLS] = {{7,3,4,1,2},
                            {4,7,2,0,0}};

const int TA2_ROWS = 4;
int ta2[TA2_ROWS][COLS] = {{2,7,4,0,4},
                            {7,3,2,0,5},
                            {3,7,4,5,7},
                            {2,0,7,4,5}};

const int TA3_ROWS = 5;
int ta3[TA3_ROWS][COLS] = {{7,3,4,5,6},
                            {2,7,5,0,6},
                            {3,0,7,5,6},
                            {1,3,4,7,6},
                            {2,3,4,5,7}};

const int TA4_ROWS = 10;
int ta4[TA4_ROWS][COLS] = {{7,3,4,0,6},
                            {2,7,5,5,6},
                            {1,3,7,5,6},
                            {2,3,4,7,6},
                            {2,3,4,5,7},
                            {6,0,4,5,7},
                            {1,6,0,7,6},
                            {2,3,7,5,6},
                            {5,0,4,7,6},
                            {2,3,4,5,7}};

int main()
{
    // Run your tests
    if(test_treasure_paths()){
        cout << "All tests passed!" << endl;
    } else {
        cout << "Some tests failed." << endl;
    }

    return 0;
}
