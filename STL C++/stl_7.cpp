#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("amit");
    q.push("rahul");
    q.push("mohit");

    cout<<"First element: " << q.front() << endl;
    cout<<"Size before: "<< q.size() << endl;
    
    q.pop();
    cout<<"First element after pop: "<< q.front() << endl;
    cout<<"Size after: "<< q.size() << endl;

    return 0;
}