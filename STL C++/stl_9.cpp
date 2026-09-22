#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);

    for(int i : s){
        cout<< i <<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i : s){
        cout<< i <<" ";
    }
    cout<<endl;
    
    cout<<"5 is present or not: "<< s.count(5)<<endl;
    cout<<"3 is present or not: "<< s.count(3)<<endl;

    set<int>::iterator itr = s.find(5);

    for(auto it = itr; it !=s.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}

// duplicate elements print only one time 