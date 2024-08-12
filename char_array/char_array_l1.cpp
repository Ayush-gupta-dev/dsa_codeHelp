
// string more used as compare to char array string-> len; cin included as in
// char arr; pushback, popback... int main(){
//  string sentence;
//  getline(cin,sentence,'\n') //cin.getline() => char arr; getline() => string
//  cout << sentence
// }
// string functions...
// substr(2,5) => index 0 to 5
// substr(0) => o to end
// string name ="frknv"
// string word = "n"
// name.find(word) => will return 3rd index if -1 not found
// name.cpmpare(word)
// compare == 0 => both exactly equal > 0 s1>s2=> <0 -ve=> s1 < s2 || == is
// used; < > not used that much

// char array reverse

#include <algorithm>
#include <iostream>
using namespace std;

int sizeCharArr(char arr[]) {
  int count = 0;
  while (arr[count] != '\0') {
    count++;
  }
  cout << "size of arr is " << count << endl;
  return count;
}

void printCharArr(char arr[], int size) {
  int index = 0;
  cout << endl;
  while (index != size) {
    cout << arr[index];
    index++;
  }
  cout << endl;
}

void reverseCharArr(char arr[], int size) {
  char temp[size + 1];
  for (int i = 0; i < size; i++) {
    temp[i] = arr[size - i - 1];
  }
  temp[size] = '\0';
  printCharArr(temp, size);
}
void reverseCharArr2Pointer(char arr[], int size) {
  int i = 0;
  int j = size;
  while (i < j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
  printCharArr(arr, size + 1);
}

bool checkPalindrome(char arr[], int size) {
  int i = 0;
  int j = size - 1;
  while (i < j) {
    if (arr[i] != arr[j]) {
      cout << "checkinf for " << arr[i] << " and " << arr[j] << endl;
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main() {
  char arr[5] = "love";
  int size = sizeCharArr(arr);
  cout << "reversing the char arr";
  reverseCharArr(arr, size);
  cout << "reversing the char arr 2 pointers";
  reverseCharArr2Pointer(arr, size);
  char newArr[] = "madam";
  int size2 = sizeCharArr(newArr);
  bool val = checkPalindrome(newArr, size2);
  if (val == true) {
    cout << newArr << " is palindrome" << endl;
  } else {

    cout << newArr << " is not palindrome" << endl;
  }
  return 0;
}

// upper to lower change
// ch - 'A' + 'a' +-32
// lower to upeer
// ch - 'a' + 'A' +-32
//  lower case if b/w 'a' 'z'

// replace char in array myName@ayush@gupta@hello replace @ with space
// #include <iostream>
// using namespace std;
//
// void replaceChar(char originalChar, char newChar, char arr[], int size) {
//  for (int i = 0; i < size; i++) {
//    if (arr[i] == originalChar) {
//      arr[i] = newChar;
//    }
//  }
//
//  for (int i = 0; i < size; i++) {
//    cout << arr[i];
//  }
//}
//
// int sizeCharArr(char arr[]) {
//  int count = 0;
//  while (arr[count] != '\0') {
//    count++;
//  }
//  return count;
//}
//
// int main() {
//  char arr[100];
//  cin >> arr;
//  int size = sizeCharArr(arr);
//  replaceChar('@', ' ', arr, size);
//  return 0;
//}

// char arr length
// #include <iostream>
// using namespace std;
// int main() {
//  char arr[100];
//  cin >> arr;
//  int index = 0;
//  while (arr[index] != '\0') {
//    index++;
//  }
//  cout << index;
//}

// char arr[10]
// vectot<char>arr
// cin >> arr; type love;  store like l,o,v,e,\0 ; here \0== null character =>
// null char val=0 cout << arr; print till null char the values cout << arr if
// int arr would print address of that block; but in char arr it directly gives
// the values directly input can be taken in char arr and can be printed
// directly Ascii value of null char is Type casting cout << arr[0] <<
// (int)arr[0] << endl;
//
//
// Char arr => default delimiter = \n \t ' '
// other way to take input
// cin.getline(arr,100) => entire sentence
//
// newline  sepearated in array;
// cin.getline(arr,12,'\t') ==> read untill tab is hit
//
// Find length of char array chr arr[10]; cin >> arr
// easy for loop break at null character
//
