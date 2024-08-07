#include <climits>
#include <iostream>
#include <vector>
using namespace std;

bool search_number_2d_arr(vector<vector<int>> arr, int rowsize, int colsize,
                          int target) {
  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      if (arr[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

void print_2d_arr(vector<vector<int>> arr, int rowsize, int colsize) {
  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

pair<int, int> find_max_min_2d(const vector<vector<int>> &arr, int rowsize,
                               int colsize) {
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      if (arr[i][j] > max) {
        max = arr[i][j];
      }
      if (arr[i][j] < min) {
        min = arr[i][j];
      }
    }
  }
  return {max, min};
}

int main() {
  // int arr[2][3];
  vector<vector<int>> arr(4, vector<int>(3, 0));
  cout << "Enter the numbers in your 2d array:" << endl;
  int rowsize = 2;
  int colsize = 3;
  int target = 10;
  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      cout << "Enter value for " << i << "," << j << ": ";
      cin >> arr[i][j];
    }
  }
  cout << "Your 2D array is:" << endl;
  print_2d_arr(arr, rowsize, colsize);
  cout << "Searching for target " << target << endl;
  if (search_number_2d_arr(arr, rowsize, colsize, target)) {
    cout << "Target found!" << endl;
  } else {
    cout << "Target not found." << endl;
  }
  auto [max, min] = find_max_min_2d(arr, rowsize, colsize);
  cout << "max val is" << max << endl;
  cout << "min val is" << min << endl;
  return 0;
}
