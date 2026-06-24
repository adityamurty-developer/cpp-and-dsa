// Find pivot in sorted and rotated array 

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

int main(){
    int arr[5] = {7, 9, 1, 2, 3};

    int pivot = findPivot(arr, 5);
    cout<<"Pivot index is: " << pivot << endl;
    cout<<"Pivot element is: " << arr[pivot] << endl;
    return 0;
}