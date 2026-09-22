#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    bool find = binary_search(v.begin(), v.end(), 6);

    cout<<"is key present: "<< find << endl;

    cout<<"Lower bound: "<< lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout<<"Upper bound: "<< upper_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    
    int a = 5;
    int b = 7;
    
    cout<<"max: "<< max(a, b) << endl;
    cout<<"min: "<< min(a, b) << endl;
    
    cout<<"before swap --> a: " << a << " " <<"b: " << b << endl;
    swap(a, b);
    cout<<"after swap --> a: " << a << " " <<"b: " << b << endl;

    string str = "abcd";
    cout<<"string before: " << str << endl;
    reverse(str.begin(), str.end());
    cout<<"string after: " << str << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate: ";
    for(auto i:v){
        cout<< i << " ";
    }
    cout<<endl;

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(11);
    nums.push_back(5);
    cout<< "nums before sorting: ";
    for(int i : nums){
        cout << i << " ";
    }
    cout<<endl;

    sort(nums.begin(), nums.end());
    cout<< "nums after sorting: ";
    for(int i : nums){
        cout << i << " ";
    }

    return 0;
}

// sort function is based on intro-sort and intro-sort is the combination of 3 algo i.e. quick sort, heap sort, and insertion sort