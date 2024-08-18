#include <iostream>
#include <string>
using namespace std;

string removeDublicateStr(string &inputStr) {
  int i = 0;
  while (i < inputStr.size() - 1) {
    if (inputStr.empty()) {
      break;
    }
    if (inputStr[i] == inputStr[i + 1]) {
      inputStr.erase(i, 2);
      if (i != 0) {
        i--;
      }
    } else {
      i++;
    }
  }
  return inputStr;
}

int main() {
  string inputStr;
  cin >> inputStr;
  cout << "removing dubl input in " << inputStr << endl;
  string newStr = removeDublicateStr(inputStr);
  cout << "done " << newStr << endl;
}

