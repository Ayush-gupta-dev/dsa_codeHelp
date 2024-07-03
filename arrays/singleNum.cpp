// time compl = linear ; space = const

#include<iostream>

using namespace std;



int findUniqueNum(int arr[]){
    int xorNum = 0;
    for(int i=0;i<5;i++){
        xorNum = xorNum ^ arr[i]; 
    }
    return xorNum;
}

int main(){
    int arr[5] = {1,2,1,2,5};
    int uniqueNum = findUniqueNum(arr);
    cout << uniqueNum << endl;
    return 0;
}

// XOR of a number with itself is 0
// XOR of a number with 0 is the number itself
// XOR is associative and commutative

// the time complexity is O(n), where n is the size of the array.
//The function uses only a single additional variable (xorNum) regardless of the input size.
// It doesn't create any data structures that grow with the input.
// Thus, the space complexity is O(1), or constant space.