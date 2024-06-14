#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr;

    arr.push_back(11);
    arr.push_back(2);
    arr.push_back(30);
    arr.push_back(48);
    arr.push_back(35);

    // vector to heap

    make_heap(arr.begin(),arr.end()); // converted to max heap O(n)
    
    // note for insertion
    arr.push_back(99);
    push_heap(arr.begin(),arr.end()); // O(logN)

    //deletion
    pop_heap(arr.begin(),arr.end());  //O(1)
    // now are max elem has been popped but still in array somewhere we dk so we will pop it
    arr.pop_back();

    //sort heap
    sort_heap(arr.begin(),arr.end()); // asc O(n)
 
    for(int a:arr){
        cout << a << " ";
    } cout << endl;


    return 0;

}