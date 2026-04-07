/*==================================================================================================
Array Introduction
==================================================================================================*/
#include	<iostream>
#include <time.h>

using namespace std;

const int TESTSIZE = 15; // the size of the test array
const int RANDMAX = 100; // random numbers will be 1 to RANDMAX inclusive

/*--------------------------------------------------------------------------------------------------
PROVIDED Function Declarations (already implemented):
--------------------------------------------------------------------------------------------------*/

void showMenu();
// Displays the menu for the different test options

void printArray(int arr[], int length);
// Prints the contents of the array as a comma seperated list. Example: 12, 9, 11, 7, 1

/*--------------------------------------------------------------------------------------------------
STUDENT EXERCISE Function Declarations (YOU must implement these):
--------------------------------------------------------------------------------------------------*/

void initializeArray(int arr[], int length);
// Fills the array with values from 0 to length-1
// Example: An array of length 4 would contain 0, 1, 2, 3

void randomArray(int arr[], int length, int max);
// Fills the array with random integers between 1 and max (inclusive)

bool isElement(int arr[], int length, int value);
// Returns true if value is an element of the array, false otherwise

int countElement(int arr[], int length, int value);
// Counts and returns the number of occurances of value in arr

bool checkForDuplicates(int arr[], int length);
// Returns true if there are any duplicate values in the array, false otherwise

int arrayMaximum(int arr[], int length);
// Returns the maximum value in the array

int arrayMinimum(int arr[], int length);
// Returns the minimum value in the array

float arrayAverage(int arr[], int length);
// Returns the average value in the array

void reverseArray(int arr[], int length);
// Reverses the order of the array. Example: 1, 2, 3, 4 becomes 4, 3, 2, 1

/*--------------------------------------------------------------------------------------------------
Main:
--------------------------------------------------------------------------------------------------*/

int main(){
	int userOption; // the option from the menu
	int searchInteger; // a user supplied integer value, used for searching

	int testArray[TESTSIZE];

	// initialize random seed
	srand(time(NULL));

	// fill the array with zeros
	for(int i = 0; i < TESTSIZE; i++)
		testArray[i] = 0;

	do{
      cout << "Please select an option, 0 to see the menu> ";
		cin >> userOption;

		switch(userOption){
			case 0:
				showMenu();
				break;
			case 1:
				printArray(testArray, TESTSIZE);
				break;
			case 2:
				initializeArray(testArray, TESTSIZE);
				break;
			case 3:
				randomArray(testArray, TESTSIZE, RANDMAX);
				break;
			case 4:
				cout << "What number do you want to look for?> ";
				cin >> searchInteger;
				if(isElement(testArray, TESTSIZE, searchInteger)){
					cout << searchInteger << " is in the array.\n";
				}else{
					cout << searchInteger << " is not in the array.\n";
				}
				break;
			case 5:
				cout << "What number do you want to look for?> ";
				cin >> searchInteger;
				cout<< "Count = " << countElement(testArray, TESTSIZE, searchInteger);
				break;
			case 6:
				if(checkForDuplicates(testArray, TESTSIZE)){
					cout << "Duplicates found.\n";
				}else{
					cout << "No duplicates found\n";
				}
				break;
			case 7:
				cout << "Maximum Value: " << arrayMaximum(testArray, TESTSIZE) << endl;
				break;
			case 8:
				cout << "Minimum Value:" << arrayMinimum(testArray, TESTSIZE) << endl;
				break;
			case 9:
				cout << "Average Value:" << arrayAverage(testArray, TESTSIZE) << endl;
				break;
			case 10:
				reverseArray(testArray, TESTSIZE);
				break;
			case 11:
				cout << "Exiting..." << endl;
				break;
			default:
				cout << "Not a valid option\n";
		}
	}while(userOption != 11);

	return 0;
}

/*==================================================================================================
PROVIDED FUNCTIONS (already implemented - do not modify)
==================================================================================================*/

void showMenu(){
	cout << "Test Cases:\n";
	cout << "\t 0. showMenu\n";
	cout << "\t 1. printArray\n";
	cout << "\t 2. initializeArray\n";
	cout << "\t 3. randomArray\n";
	cout << "\t 4. isElement\n";
	cout << "\t 5. countElement\n";
	cout << "\t 6. checkForDuplicates\n";
	cout << "\t 7. arrayMaximum\n";
	cout << "\t 8. arrayMinimum\n";
	cout << "\t 9. arrayAverage\n";
	cout << "\t10. reverseArray\n";
	cout << "\t11. exit\n";
}

/*------------------------------------------------------------------------------------------------*/

void printArray(int arr[], int length){
	// make sure that the array has at least length > 0
	if(length == 0) return;

	cout << arr[0];
	for(int i = 1; i < length; i++){
		cout << ", " << arr[i];
	}

	cout << endl;

	return;
}

/*==================================================================================================
STUDENT EXERCISES - Implement the functions below
==================================================================================================*/

void initializeArray(int arr[], int length){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Fill the array with values from 0 to length-1
	 * Example: An array of length 4 would contain 0, 1, 2, 3
	 *
	 * Hint: Use a for loop to iterate through each index
	 ***************************************************************************/
    for(int i = 0; i < length; i++){
        arr[i] = i;
    }
	return;
}

/*------------------------------------------------------------------------------------------------*/

void randomArray(int arr[], int length, int max){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Fill the array with random integers between 1 and max (inclusive)
	 *
	 * Here's how to generate ONE random number between 1 and max:
	 *     rand() % max + 1
	 *
	 * Your task: Use a loop to fill EVERY element in the array with a
	 *            random number using this formula
	 ***************************************************************************/

	// Example of generating one random number (remove this when implementing):
	    for(int i = 0; i < length; i++){
        arr[i] = rand() % max + 1;
    }
	return;
}

/*------------------------------------------------------------------------------------------------*/

bool isElement(int arr[], int length, int value){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Return true if 'value' exists anywhere in the array, false otherwise
	 *
	 * Hint: Loop through the array and check if any element equals value
	 ***************************************************************************/
    for(int i = 0; i < length; i++){
        if(arr[i] == value){
            return true;
        }
    }

	return false;
}

/*------------------------------------------------------------------------------------------------*/

int countElement(int arr[], int length, int value){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Count and return how many times 'value' appears in the array
	 *
	 * Hint: Use a counter variable, loop through array, increment when found
	 ***************************************************************************/
    int count = 0;
    for(int i = 0; i < length; i++){
        if(arr[i] == value){
            count++;
        }
    }
	return count;
}

/*------------------------------------------------------------------------------------------------*/

void reverseArray(int arr[], int length){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Reverse the order of elements in the array
	 * Example: 1, 2, 3, 4 becomes 4, 3, 2, 1
	 *
	 * Hint: Swap elements from the ends moving toward the middle
	 *       You'll need a temporary variable to swap two values
	 ***************************************************************************/
    for(int i = 0; i < length / 2; i++){
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
	return;
}

/*------------------------------------------------------------------------------------------------*/

bool checkForDuplicates(int arr[], int length){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Return true if ANY value appears more than once in the array
	 *
	 * Hint: Use nested loops - for each element, check if it matches
	 *       any element that comes after it
	 ***************************************************************************/
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(arr[i] == arr[j]) return true;
        }
    }
	return false;
}

/*------------------------------------------------------------------------------------------------*/

int arrayMaximum(int arr[], int length){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Return the largest value in the array
	 *
	 * Hint: Start by assuming the first element is the maximum,
	 *       then loop through and update if you find something larger
	 ***************************************************************************/
    int maxv = arr[0];

    for(int i = 1; i < length; i++){
        if(arr[i] > maxv) maxv = arr[i];
    }

    return maxv;

}

/*------------------------------------------------------------------------------------------------*/

int arrayMinimum(int arr[], int length){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Return the smallest value in the array
	 *
	 * Hint: Start by assuming the first element is the minimum,
	 *       then loop through and update if you find something smaller
	 ***************************************************************************/
    int minv = arr[0];

    for(int i = 1; i < length; i++){
        if(arr[i] < minv) minv = arr[i];
    }

    return minv;

}

/*------------------------------------------------------------------------------------------------*/

float arrayAverage(int arr[], int length){
	/***************************************************************************
	 * TODO: Implement this function
	 *
	 * Return the average (mean) of all values in the array
	 *
	 * Hint: Sum all elements, then divide by length
	 *       Remember to cast to float before dividing to avoid integer division
	 ***************************************************************************/
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += arr[i];
    }

    return (float)sum / length;
	return 0;
}

/*------------------------------------------------------------------------------------------------*/
