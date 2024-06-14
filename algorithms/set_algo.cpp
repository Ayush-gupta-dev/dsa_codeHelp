#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> arr1(4);
    vector<int> arr2(4);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;

    arr2[0] = 3;
    arr2[1] = 4;
    arr2[2] = 5;
    arr2[3] = 6;


    //set cmn set proper union inters etc.
    vector<int> result;
    // set_union(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(result,result.begin())); // 1,2,3,4,5,6
    // set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(result,result.begin())); //2,4
    // set_difference(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(result,result.begin())); //1,2,3-3,4-4
    // symmetric diff just like diff but left over elem also of set so 1,2,5,6 baki cut gye
    set_symmetric_difference(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(result,result.begin())); //1,2,3-3,4-4



    for(int a:result){
        cout << a << " ";
    } cout << endl;

    return 0;
}