#include "arraySearch.h"

using namespace std;

// TODO: implement search_unsorted
// Loop through every element. Return true if value matches any element.

bool search_unsorted(int value, int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false; // replace this
}

// TODO: implement search_sorted
// Use binary search. Track firstIndex and lastIndex, compute midpoint each step.
bool search_sorted(int value, int arr[], int length) {
    int left = 0;
    int right = length - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == value) {
            return true;
        }
        else if (arr[mid] < value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return false; // replace this
}
