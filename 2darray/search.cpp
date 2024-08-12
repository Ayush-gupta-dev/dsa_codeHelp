#include <algorithm>
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

void diagonal_sums_better(const vector<vector<int>> &arr, int rowsize,
                          int colsize) {
  int sum_right = 0;
  int sum_left = 0;
  int min_size = min(rowsize, colsize);

  for (int i = 0; i < min_size; i++) {
    sum_right += arr[i][i];
    sum_left += arr[i][colsize - 1 - i];
  }

  cout << "Right diagonal sum is " << sum_right << endl;
  cout << "Left diagonal sum is " << sum_left << endl;
}

void diagonal_sums(vector<vector<int>> arr, int rowsize, int colsize) {
  int sum = 0;
  for (int i = 0; i < colsize; i++) {
    sum += arr[i][i];
  }
  cout << "right diagonal sum is" << sum << endl;
  int sum2 = 0;
  for (int i = colsize - 1; i >= 0; i--) {
    for (int j = 0; j < rowsize; j++) {
      if (i + j == colsize - 1) {
        sum2 += arr[j][i];
      }
    }
  }
  cout << "left diagonal sum is " << sum2 << endl;
}

// Transpose of a matrix::

// upper triangle loop
void transpose_same_arr(const vector<vector<int>> &arr, int rowsize,
                        int colsize) {

  for (int i = 0; i < rowsize; i++) {
    for (int j = i; j < colsize; j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }
}

void transpose_arr(const vector<vector<int>> &arr, int rowsize, int colsize) {

  vector<vector<int>> ans(3, vector<int>(3, 0));

  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      ans[i][j] = arr[j][i];
    }
  }
  cout << "transformed arr" << endl;
  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      cout << ans[i][j] << endl;
    }
    cout << endl;
  }
}

int main() {
  // int arr[2][3];
  vector<vector<int>> arr(4, vector<int>(3, 0));
  cout << "Enter the numbers in your 2d array:" << endl;
  int rowsize = 3;
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
  cout << "both diagonal sum" << endl;
  diagonal_sums(arr, rowsize, colsize);
  transpose_arr(arr, rowsize, colsize);
  return 0;
}
