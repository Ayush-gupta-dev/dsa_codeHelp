#include<iostream>
using namespace std;
// bool checkTwoSum(int arr[],int size, int target){

//     for(int i=0;i<size;i++){
//         for(int j=0; j<size;j++){
//             if(arr[i] + arr[j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

//triplet = 3 for=>O(n3) ; space O(const)


pair<int,int> checkTwoSum(int arr[],int size, int target){

    pair<int,int> ans;
    for(int i=0;i<size;i++){
        for(int j=0; j<size;j++){
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second= arr[j];
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    pair<int,int> p = make_pair(10,20);

    cout << p.first <<endl;

    int arr[] = {10,20,30,40};
    int size=4;
    int target = 70;
    pair<int,int> response = checkTwoSum(arr,size,target);
    cout << response.first <<endl;
    cout << response.second <<endl;


    return 0;
}
