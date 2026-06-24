// Find key - index in given sorted and rotated array

#include <iostream>
using namespace std;

int findPivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return end;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right part
        if (key > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;    // go to left part
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int findPosition(int arr[], int key, int size){
    int pivot = findPivot(arr, size);
    if(key >= arr[pivot] && key <= arr[size - 1]){
        return binarySearch(arr, pivot, size-1, key);
    } else{
        return binarySearch(arr, 0, pivot-1, key);
    }
}

int main(){
    
    int arr[6] = {7, 8, 9, 1, 3, 5};
    cout<<"Position of key element is: " << findPosition(arr, 5, 6);

    return 0;
}