#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int target, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {9, 6, 1, 10, 22, 36, 2, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int target = 9;
    int index = binarySearch(arr, target, 0, n - 1);
    if (index != -1) {
        cout << "Target element " << target << " found at index " << index << endl;
    } else {
        cout << "Target element " << target << " not found in array" << endl;
    }
    return 0;
}
