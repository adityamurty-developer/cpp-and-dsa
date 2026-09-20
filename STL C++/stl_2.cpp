#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> ans;
    cout<<"capacity: " << ans.capacity() <<endl;

    ans.push_back(1);
    cout<<"capacity: " << ans.capacity() <<endl;

    ans.push_back(2);
    cout<<"capacity: " << ans.capacity() <<endl;

    ans.push_back(3);
    cout<<"capacity: " << ans.capacity() <<endl;
    cout<<"size: " << ans.size() <<endl; 

    cout<<"vector ans: ";
    for(int i = 0; i<ans.size(); i++){
        cout<< ans[i] << " ";
    }

    cout<<endl;

    cout<<"Element at index 2: " << ans.at(2) << endl;
    cout<<"Front element: " << ans.front() << endl;
    cout<<"Back element: " << ans.back() << endl;

    ans.pop_back();

    cout<<"Elements after pop: ";
    for(int j = 0; j < ans.size(); j++){
        cout<< ans[j] << " ";
    }

    cout<<"before clear size: "<<ans.size()<<endl;
    ans.clear();
    cout<<"after clear size: "<<ans.size()<<endl;
    return 0;
}