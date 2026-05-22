#include <iostream>
using namespace std;

int main(){

    int arr[3] = {1,2,2};
    int freq[10] = {0};

    // frequency count
    for(int i = 0; i < 3; i++){
        freq[arr[i]]++;
    }

    // uniqueness check
    int i=0;
    while(i<10){
        int j=i+1;
        while(j<10){
            if(freq[i]==freq[j]&& freq[j]>0){
                cout<<"False"<< endl;
                return 0;
            }
            j++;
        }
        i++;
    }

    for(int i=0; i<10; i++){
        if(freq[i]>0){
            cout<< i << " -> " << freq[i] << endl;
        }
    }

    return 0;
}