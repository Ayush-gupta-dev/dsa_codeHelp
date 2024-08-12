#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printvv(vector<vector<int>> &v) {
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i][0] << v[i][1] << endl;
  }
}

bool mycomp(vector<int> &a, vector<int> &b) {
  return a[1] > b[1];
} // descending at index1

int main() {
  vector<vector<int>> v;
  int n;
  cout << "enter no. of elem" << endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    vector<int> temp;
    int a;
    int b;
    cout << "enter elem at index" << i << endl;
    cin >> a;
    cin >> b;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
  }
  cout << "vals of vec of vect int are" << endl;
  printvv(v);
  cout << "sorting by insex 1" << endl;
  sort(v.begin(), v.end(), mycomp);
  printvv(v);
}

// we will use c++ sort library for now; from its TL library
//  sort(v.begin(),v.end()) incr order, vector sorting
//  mixtr of mix hea[ etc...
//  bool mycomp(int &a, int &b){
//     return a < b // incr order
//     return a>b //dec order
//  }
//   sort(v.begin(),v.end(),mycomp)
//
//   lets say we have array of array of vector and sort elemnts w.r.t second
//   elem of array..
//
//   vectot<vector<int>>v;
//   int n;
//   cin >> n;
//   for (int i =0;i<n;i++){
//     int a,b;
//     cin >>a>>b;
//     vector<int>temp;
//     temp.push_back(a);
//     temp.push_back(b);
//
//   }
