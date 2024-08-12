#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void selection_sort(const vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < n - 1; i++) {
    int mindex = i;
    for (int j = i; j < n - 1; j++) {
      if (v[i] > v[j]) {
        mindex = j;
      }
    }
    swap(v[i], v[mindex]);
  }
}

void insertion_sort(vector<int> v) {
  int n = v.size();
  for (int i = 1; i < n - 1; i++) {
    int key = v[i];
    int j = i - 1;
    while (j >= 0 && v[j] > key) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = key;
  }
}

int main() {
  vector<int> v = {3, 8, 7, 5, 4};
  selection_sort(v);
  print(v);
}
