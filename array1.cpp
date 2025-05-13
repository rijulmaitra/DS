#include <iostream> 
using namespace std; 
int main() {
    int a[4]={1,2,3,4};
    int b[]={3,5,7,9};
    cout << "----------------" << endl;
    // display all elements
    for (int i=0; i<4; i++){
        cout << a[i] << endl;
    }
    cout << "----------------" << endl;
    // size of arrray
    cout << sizeof(a) << endl;
    cout << "----------------" << endl;
    // address of elements
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << &a[2] << endl;
    cout << &a[3] << endl;
    cout << "----------------" << endl;
    

  return 0;
}