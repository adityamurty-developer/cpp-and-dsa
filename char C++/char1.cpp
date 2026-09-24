#include <iostream>
using namespace std;

int main(){
    
    char name[10];
    cout<<"Enter a your name: ";
    cin>> name;

    cout<<"Your name is: "<< name << endl;

    name[3] = '\0';

    cout<<"Your name is: "<<name;

    return 0;
}