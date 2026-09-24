// finding the length of a string
#include <iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char arr[10];

    cout<<"Enter your name: ";
    cin>> arr;

    cout<<"Your name is: " << arr << endl;
    cout<<"Length is: " << getLength(arr) << endl;
    
    return 0;
}