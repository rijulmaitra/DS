#include <iostream> 
using namespace std; 
int main() {
    int a[4]={3,1,9,4};
    int b[]={3,5,7,9};
    cout << "------------------------------------------" << endl;
    // display all elements
    cout << "All elements: " ;
    for (int i=0; i<4; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    cout << "------------------------------------------" << endl;
    // size of arrray
    cout << "Size of array is: " << sizeof(a) << endl;
    cout << "------------------------------------------" << endl;
    // address of elements
    cout << "Address of 1st element is: " << &a[0] << endl;
    cout << "Address of 2nd element is: " << &a[1] << endl;
    cout << "Address of 3rd element is: " << &a[2] << endl;
    cout << "Address of 4th element is: " << &a[3] << endl;
    cout << "------------------------------------------" << endl;
    // sum of elements
    int sum = 0;
    for (int i=0; i<4; i++){
        sum += a[i];
    }
    cout << "Sum of total elements is: " << sum << endl;
    cout << "------------------------------------------" << endl;
    // highest element in array
    int max = a[0];
    for (int i=0; i<4; i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    cout << "Highest element in array: " << max << endl;
    cout << "------------------------------------------" << endl;
    

  return 0;
}