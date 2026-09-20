#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v(5, 1);

    cout<<"Vector v: ";
    for(int i : v){
        cout<< i <<" ";
    }
    cout<<endl;
    
    vector<int> ans(v);

    cout<<"new vector: ";
    for(int i : ans){
        cout<< i << " ";
    }


    return 0;
}