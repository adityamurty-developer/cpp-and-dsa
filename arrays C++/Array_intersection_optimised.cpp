// optimised method for finding array intersection
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr1[5] = {1, 2, 2, 3, 4};
    int arr2[3] = {2, 2, 3};
    int i=0, j=0;
    vector<int> ans;
    
    while(i<5 && j<3){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if(arr1[i] < arr2[j]){
            i++;
        } else {
            j++;
        }
    }

    for(int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
}

    return 0;
}