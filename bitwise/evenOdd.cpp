// n and 1 = 0 => even
// n and 1 = 1 => odd
// not 5 i.e ~5 = 5 in 32 bit i.e 000...101 then flip all, MSD 1 => 2's complement. ~5 = -6
// XOR ^ => Find unique number e.g 2,3,3,5,4,5,4 find niq no. in this best apprch is to find the xor of all and 3 will be left.
// ledt shift << : 5 << 1: 10001 = 00010 left most is lost right most vaccancy = 0
// 5 << n = 5 * 2^n 
// 5 >> n = 5 / 2^n 
// corner cases: idk see...
// set bit = no. of 1 in 5 setbit =2;  000...101 setbit =2
// frind set bit in a number
// take & 1 with left most bit if its 1 its 1 and setbit++
//
// g++ evenOdd.cpp -o evenOdd -lstdc++
// 
#include<iostream>
#include<bitset>

using namespace std;


int countSetBit(int num){
  int count = 0;
  //convert number to binary
  bitset<32> binary(num);
  for(int i=31 ; i >= 0 ; i--){
    if(binary[i] ==1){
      count ++;
    }
  }
  return count;

}

int main(){
  int num;
  cout << "enter a number to check its setbits" <<endl;
  cin >> num;
  int setBitCount = countSetBit(num);
  cout << "your set bit count for" << num << "is: " << setBitCount << endl;
  return 0;
  
}
// pass by value = normally
// pass refer when vari ka ans ka track rkhna hota hai