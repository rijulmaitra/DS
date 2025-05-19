// Linear Search in array
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key) {
    for(int j = 0; j < n; j++) {
        if(arr[j] == key) {
            return j;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number you want to search: ";
    cin >> key;

    int index = LinearSearch(arr, n, key);
    if(index != -1) {
        cout << "The number is found at index: " << index << endl;
    } else {
        cout << "The number is not found in the array." << endl;
    }

    return 0;
}
