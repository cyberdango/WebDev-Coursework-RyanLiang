#ifndef ARRAYSEARCH_H_INCLUDED
#define ARRAYSEARCH_H_INCLUDED

// Returns true if value is found anywhere in the array. O(n).
bool search_unsorted(int value, int arr[], int length);

// Returns true if value is found in the sorted array. O(log n).
bool search_sorted(int value, int arr[], int length);

#endif // ARRAYSEARCH_H_INCLUDED
