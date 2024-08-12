#include<iostream>

using namespace std;


void rotateArr(int arr[], int size, int shift){
    int finalShift = shift%size;
    if(finalShift == 0){
        return;
    }
    //step1: copy last final shift elem in temp arr;'
    int temp[1000];
    int index=0;
    for(int i=size-finalShift;i<size;i++){
        temp[index] = arr[i];
        index++;

    }
    //step2: shift array by final shift
    for(int i=size-1;i>=0;i--){
        if(i-shift>=0){
        arr[i] = arr[i-finalShift];}
    }
    //step3 copy temp into original arr
    for(int i=0;i<finalShift;i++){
        arr[i] = temp[i];
    }
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    //shift cyclic
    int shift=2;
    rotateArr(arr,size,shift);
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
}