#include <iostream>
#include "treasurePath.h"

using namespace std;

int maximumParent(int arr[][COLS], int rNum, int cNum){
    int maxVal = arr[rNum-1][cNum];

    if(cNum > 0 && arr[rNum-1][cNum-1] > maxVal){
        maxVal = arr[rNum-1][cNum-1];
    }

    if(cNum < COLS-1 && arr[rNum-1][cNum+1] > maxVal){
        maxVal = arr[rNum-1][cNum+1];
    }

    return maxVal;
}

int maximumTreasure(int treasure[][COLS], int collection[][COLS], int rows){
    int dp[100][COLS];

    for(int c = 0; c < COLS; c++){
        dp[0][c] = treasure[0][c];
    }

    for(int r = 1; r < rows; r++){
        for(int c = 0; c < COLS; c++){
            int maxVal = dp[r-1][c];

            if(c > 0 && dp[r-1][c-1] > maxVal){
                maxVal = dp[r-1][c-1];
            }

            if(c < COLS-1 && dp[r-1][c+1] > maxVal){
                maxVal = dp[r-1][c+1];
            }

            dp[r][c] = treasure[r][c] + maxVal;
        }
    }

    int maxVal = dp[rows-1][0];

    for(int c = 1; c < COLS; c++){
        if(dp[rows-1][c] > maxVal){
            maxVal = dp[rows-1][c];
        }
    }

    return maxVal;
}

bool test_treasure_paths(){
    int ta1[2][COLS] = {{7,3,4,1,2},{4,7,2,0,0}};
    int ta2[4][COLS] = {{2,7,4,0,4},{7,3,2,0,5},{3,7,4,5,7},{2,0,7,4,5}};
    int ta3[5][COLS] = {{7,3,4,5,6},{2,7,5,0,6},{3,0,7,5,6},{1,3,4,7,6},{2,3,4,5,7}};
    int ta4[10][COLS] = {{7,3,4,0,6},{2,7,5,5,6},{1,3,7,5,6},{2,3,4,7,6},{2,3,4,5,7},{6,0,4,5,7},{1,6,0,7,6},{2,3,7,5,6},{5,0,4,7,6},{2,3,4,5,7}};

    int col1[2][COLS] = {};
    int col2[4][COLS] = {};
    int col3[5][COLS] = {};
    int col4[10][COLS] = {};

    bool t1 = maximumTreasure(ta1, col1, 2) == 14;
    bool t2 = maximumTreasure(ta2, col2, 4) == 28;
    bool t3 = maximumTreasure(ta3, col3, 5) == 35;
    bool t4 = maximumTreasure(ta4, col4, 10) == 70;

    return t1 && t2 && t3 && t4;
}