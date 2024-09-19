#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
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
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter array[" << i << "]: ";
        cin >> array[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int result = BinarySearch(array, n, target);

    if (result != -1) {
        cout << "Target found at index " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
