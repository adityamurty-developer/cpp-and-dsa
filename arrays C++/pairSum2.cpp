// Optimized approach of pair sum using two pointer 

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 6;

    int i=0, j=4;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            cout<< "elements are: " << arr[i] << " " << arr[j] << endl;
            cout<< "index are: " << i << " " << j << endl;
            i++;
            j--;
        } else if(sum < target){
            i++;
        } else {
            j--;
        }
    }
    return 0;
}