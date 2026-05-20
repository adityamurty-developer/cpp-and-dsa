#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 4, 5, 4};
    int n = 7;
    int freq[10] = {0};    // initialise frequency from 0 to n-1

    // counting frequency
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    // print duplicates
    for(int i=0; i<10; i++){
        if(freq[i] > 1){
            cout<<i<< " ";
        }
    }
    return 0;
}