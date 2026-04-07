#include <iostream>
#include "arraySearch.h"

using namespace std;

int main() {
    // --- unsorted search test ---
    int unsorted[] = {5, 1, 8, 3, 9, 2};
    int unsortedLen = 6;

    cout << "search_unsorted: looking for 8 (expect true):  ";
    cout << (search_unsorted(8, unsorted, unsortedLen) ? "true" : "false") << endl;

    cout << "search_unsorted: looking for 7 (expect false): ";
    cout << (search_unsorted(7, unsorted, unsortedLen) ? "true" : "false") << endl;

    // --- sorted search test ---
    int sorted[] = {1, 3, 5, 7, 9, 11};
    int sortedLen = 6;

    cout << "search_sorted:   looking for 7 (expect true):  ";
    cout << (search_sorted(7, sorted, sortedLen) ? "true" : "false") << endl;

    cout << "search_sorted:   looking for 4 (expect false): ";
    cout << (search_sorted(4, sorted, sortedLen) ? "true" : "false") << endl;

    return 0;
}
