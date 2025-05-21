// Bubble Sort
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void display(int arr[], int n){
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n=5;
    int arr[]={7,4,8,1,3};
    bubbleSort(arr,n);
    display(arr,n);

    return 0;
}