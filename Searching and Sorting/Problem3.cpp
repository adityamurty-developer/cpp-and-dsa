// Peak index in a mountain 

#include <iostream>
using namespace std;

int peakIndex(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        } else if(arr[mid] > arr[mid+1]){
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return end;
}

int main(){
    int arr[5] = {3, 4, 5, 2, 1};
    int peak = peakIndex(arr, 5);

    cout<< "Peak index is: " << peak << endl;
    cout<< "Peak element is: " << arr[peak] << endl;

    return 0;
}