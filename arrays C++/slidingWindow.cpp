#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 3;
    int i = 0;
    int j = k-1;
    while(j<5){
        int sum = arr[i] + arr[i+1] + arr[j];
        cout<< arr[i] << arr[i+1] << arr[j] << " : " << sum << endl;
        i++;
        j++;
    }
    return 0;
}