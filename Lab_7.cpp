#include <iostream>
using namespace std;

int* reverseArray(int arr[], int size) {
    int* revArr = new int[size];
    for(int i = 0; i < size; i++) {
        revArr[i] = arr[size - 1 - i];
    }
    return revArr;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int* revArr = reverseArray(arr, size);
    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nReversed array: ";
    for(int i = 0; i < size; i++) {
        cout << revArr[i] << " ";
    }
    delete[] revArr;
    return 0;
}
