// Binary Search in array
#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int BinarySearch(int arr[], int first, int last, int key) {
    if (first > last) {
        return -1;
    }

    int mid = first + (last - first) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return BinarySearch(arr, mid + 1, last, key);
    else
        return BinarySearch(arr, first, mid - 1, key);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    sort(arr, arr + n); // Sort the array in ascending order

    int result = BinarySearch(arr, 0, n - 1, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
