#include <iostream>

using namespace std;

int* checkTriplet(int arr[], int size, int target){
    int* triplet = new int[3]; // Allocate memory for the triplet
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            for(int k = j + 1; k < size; k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    triplet[0] = arr[i];
                    triplet[1] = arr[j];
                    triplet[2] = arr[k];
                    return triplet;
                }
            }
        }
    }
    // If no triplet is found, return null pointer1
    return nullptr;
}

int main(){
    int arr[] = {-1, 1, 2, 1, -1, 3};
    int target = 0;
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int* triplet = checkTriplet(arr, size, target);

    if(triplet != nullptr){
        cout << triplet[0] << endl;
        cout << triplet[1] << endl;
        cout << triplet[2] << endl;
    } else {
        cout << "No triplet found" << endl;
    }

    // Free allocated memory
    delete[] triplet;

    return 0;
}
