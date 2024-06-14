#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    cout << totalSum << endl;

    vector<int> arr1(3);
    vector<int> arr2(3);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    arr2[0] = 3;
    arr2[1] = 4;
    arr2[2] = 5;

    int ansP = inner_product(arr1.begin(), arr1.end(), arr2.begin(), 0); // 0 me add huga product 1*3 + 2*4...
    cout << ansP << endl;

    // partial sum e.g 1,2,3,4,5 == 1,3,6,10,15
    vector<int> result(arr.size());
    partial_sum(arr.begin(),arr.end(),result.begin());

    for(int a:result){
        cout << a << " ";
    }

    //iota fills consec vals if iota(1) fills 1,2,3,4,5 if size 5
    vector<int> iota_arr(5);
    iota(iota_arr.begin(),iota_arr.end(),250);
    for(int a:iota_arr){
        cout <<a <<" ";
    }
    return 0;
}