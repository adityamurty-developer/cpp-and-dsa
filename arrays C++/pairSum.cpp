// brute force method

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int target = 6;

    int i = 0;
    while(i < 5) {
        int j = i + 1;
        while(j < 5) {
            int sum = arr[i] + arr[j];
            if(sum == target) {
                cout << arr[i] << " " << arr[j] << endl;
            }
            j++;
        }
        i++;
    }
    return 0;
}