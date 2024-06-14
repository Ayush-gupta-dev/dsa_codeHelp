#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void printDouble(int a){
    cout << 2*a << " ";
}

bool checkEven(int a){
    return a%2 == 0;
}

int main(){

    vector<int> arr(5);
    arr[0] = 30;
    arr[1] = 20;
    arr[2] = 11;
    arr[3] = 15;
    arr[4] = 97;

    // for_each(arr.begin(),arr.end(),printDouble);

    int target = 40;
    auto it = find(arr.begin(),arr.end(),target); // if target not found 0

    auto fit = find_if(arr.begin(),arr.end(),checkEven);
    cout << *fit <<endl;

    int target2 = 20;
    int ans = count(arr.begin(),arr.end(),target2);
    cout << ans << endl;

    int ans2 = count_if(arr.begin(), arr.end(),checkEven);
    cout << ans2 << endl;

    sort(arr.begin(),arr.end());

    for(int a:arr){
        cout << a << " ";
    }
    reverse(arr.begin(),arr.end());
      for(int a:arr){
        cout << a << " ";
    }

    //rotate index 0 to 3 ; moves all rest 3 forwards...
    cout << "before rotating" << endl;
    for(int a:arr){
        cout << a << " ";
    }
    rotate(arr.begin(),arr.begin()+3,arr.end());
    cout << "after rotating" << endl;
        for(int a:arr){
            cout << a << " ";
        }
    // ----

    //uniq: on sorted elem removes uniq vals
    vector<int> arr2 (5);
    arr2[0] = 1;
    arr2[1] = 1;
    arr2[2] = 1;
    arr2[3] = 2;
    arr2[4] = 2;

    auto it3 = unique(arr2.begin(),arr2.end()); 
    // it se pehle unique, it ke baad duplicate...
    arr2.erase(it3,arr2.end());
    cout << "---" << endl;
    for(int a:arr2){
        cout << a << " ";
    }

    //partition
    auto it4 = partition(arr.begin(),arr.end(),checkEven);
    // partn se pehle even part ke baad odd
        cout << "---" << endl;
        for(int a:arr){
            cout << a << " ";
        }


    return 0;
}