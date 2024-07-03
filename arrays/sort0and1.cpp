#include<iostream>

using namespace std;


void sort0and1(int arr[], int size){
    //counting
    int zeroCount = 0;
    for(int i =0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
    }
    // int oneCount = size - zeroCount;

    //insertion
    fill(arr,arr+zeroCount,0);
    fill(arr+zeroCount,arr+size,1);
}

int main(){
    int arr[] = {0,1,0,1,1,1,0,1,0,1,0,1,1,1,0,0,0};
    int size = sizeof(arr) / sizeof(arr[0]); //bad practicE??
    sort0and1(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
// counting: count num of 0 and 1 fill 0 then 1=> time = O(n) ; space = o(n) count + o(n) insert; space = limited variable o(1);
// sorting: sort(arr,arr+n) time = O(nLogn)
// 2 pointer: 