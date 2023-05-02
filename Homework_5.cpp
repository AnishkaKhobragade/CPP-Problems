#include <iostream>

using namespace std;

int* copyAndExtendArray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int* newArr = copyAndExtendArray(arr, size);
    for (int i = 0; i < size+1; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
    
    delete[] newArr;
    return 0;
}

int* copyAndExtendArray(int arr[], int size) {
    int* newArr = new int[size+1]; 
    newArr[0] = 0; 
    for (int i = 0; i < size; i++) {
        newArr[i+1] = arr[i]; 
    }
    return newArr; 
}
