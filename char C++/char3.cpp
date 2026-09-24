// Reverse a string

#include <iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main(){
    char name[10];

    cout<<"Enter your name: ";
    cin>> name;

    cout<<"Your name is: " << name << endl;

    int len = getLength(name);
    cout<<"Length is: " << len << endl;

    reverse(name, len);
    
    cout<<"Reverse is: " << name << endl;
    return 0;
}