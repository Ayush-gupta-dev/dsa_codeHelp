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

void reverseArray(int arr[]){

  for(int i=0;i<5;i++){ // less than size/2
    int temp = arr[i];
    arr[i] = arr[9-i];
    arr[9-i] = temp;
  }
  return;
}

int main() {

  int arr[10] = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10};
  int target = 4;
  bool ans = findTarget(target, arr);
  int max = findMax(arr);
  reverseArray(arr);
  for(int i =0;i<10;i++){
    cout << arr[i] << " ";
  } cout << endl;
  cout << ans << endl;
  cout << max << endl;
}
