#include <iostream>
#include <deque>
using namespace std;

int main(){
    
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i = 0; i < d.size(); i++){
        cout<< d[i] << " "; 
    }
    cout<<endl;
     
    // d.pop_back(); 
    // d.pop_front(); 
    // for(int i = 0; i < d.size(); i++){
    //     cout<< d[i] << " "; 
    // }

    cout<<"First element: " << d.at(1) << endl;
    cout<<"Front element: " << d.front() << endl;
    cout<<"Back element: " << d.back() << endl; 

    cout<<"Empty or not: " << d.empty() << endl;
    cout<<"before erase size: " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase size: " << d.size() << endl; 
    cout <<"element remaining after erase: ";

    for(int i : d){
        cout << i << endl;
    }

    return 0;
}