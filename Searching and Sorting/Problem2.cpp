#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;      // left side search
        }
        else if (arr[mid] < key) {
            start = mid + 1;    // right side search
        }
        else {
            end = mid - 1;      // left side search
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;    // right side search
        }
        else if (arr[mid] < key) {
            start = mid + 1;    // right side search
        }
        else {
            end = mid - 1;      // left side search
        }
    }

    return ans;
}

int main() {
    int arr[6] = {0, 1, 3, 3, 3, 5};

    cout << "First occurrence index is: " << firstOccurrence(arr, 6, 3) << endl;
    cout << "Last occurrence index is: " << lastOccurrence(arr, 6, 3) << endl;

    cout<< "Total number of occurrence is: " << ( lastOccurrence(arr, 5, 3) - firstOccurrence(arr, 5, 3) ) + 1 ;
    return 0;
}