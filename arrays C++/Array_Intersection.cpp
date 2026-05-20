// Brute force method to find array intersection
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int arr1[5] = {1, 2, 2, 3, 4};
    int arr2[2] = {2, 4};
    vector<int> ans;

    for(int i=0; i<5; i++){
        int element = arr1[i];
        for(int j=0; j<2; j++){
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    for(int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
}

    return 0;
}