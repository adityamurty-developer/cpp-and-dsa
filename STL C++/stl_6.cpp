#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;
    
    s.push("love");
    s.push("babbar");
    s.push("DSA");

    cout<<"Top element: "<< s.top() << endl;
    cout<<"Size before: "<< s.size() << endl;
    
    s.pop();
    cout<<"Top element after pop: "<< s.top() <<endl;
    cout<<"Size after: "<< s.size() << endl;

    cout<<"Empty or not: "<< s.empty() << endl;
    return 0;
}