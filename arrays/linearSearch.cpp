#include <iostream>
#include<limits.h>
using namespace std;

bool findTarget(int target, int arr[]) {
  for (int i = 1; i < 10; i++) {
    if (arr[i] == target) {
      return true;
    }
  }
  return false;
}

int findMax(int arr[]){
  int max = INT_MIN;
  for(int i = 0; i<10;i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int main() {

  int arr[10] = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10};
  int target = 4;
  bool ans = findTarget(target, arr);
  int max = findMax(arr);
  cout << ans << endl;
  cout << max << endl;
}
