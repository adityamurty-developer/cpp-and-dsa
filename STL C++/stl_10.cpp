#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m;
    
    m[1] = "Amit";
    m[20] = "Rahul";
    m[3] = "Mohit";

    m.insert({5, "Nitesh"});

    for(auto i : m){
        cout<< i.first << " " << i.second <<endl;
    }

    cout<<"is 20 present: " << m.count(20) << endl;

    m.erase(20);
    cout<<"after erasing 13: " << endl;
    for(auto i:m){
        cout<<i.first <<" "<<i.second<<endl;
    }

    auto it = m.find(3);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}