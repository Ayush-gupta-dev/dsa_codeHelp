#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    auto it = binary_search(arr.begin(),arr.end(),40);
    cout << it << endl; //1 if found else 0

    //lower_bound search 35 not in arr so next bigger or equal i.e 40
    auto it2 = lower_bound(arr.begin(),arr.end(),35);
    cout << *it2 << endl;

    //upper bond: returns next big val even if eaxt found next big return
    auto it3 = lower_bound(arr.begin(),arr.end(),40);
    cout << *it3 << endl; 

    // max min cout << max(10,20) << endl;
    vector<int> brr;
    brr.push_back(10);
    brr.push_back(20);
    brr.push_back(30);
    brr.push_back(40);
    brr.push_back(50);
 
    auto itb = min_element(brr.begin(),brr.end());
    cout << *itb << endl;


    return 0;
}