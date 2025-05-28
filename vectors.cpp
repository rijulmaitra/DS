#include <iostream>
#include <vector> // Library to use Vector
using namespace std;

int main() {
    vector<int> vec1 = {1, 3, 5, 3, 6}; // Initialize and assign a vector

    cout << "Integer Vector:\n";
    for (int i : vec1) {
        cout << i << endl; // Display all values one by one
    }

    vector<char> vec2 = {'q', 'd', 'g', 'a'};

    cout << "\nCharacter Vector:\n";
    for (char c : vec2) {
        cout << c << endl;
    }

    vector<int> vec3 (5,0); // It means 5 elements and all the values are zeros(0)

    cout << "\nSame values Vector:\n";
    for (int j : vec3) {
        cout << j << endl; 
    }

    //Using vec1 vector to perform operations using Functions

    // push_back()
    cout << "\nBefore push_back() Function:\n";
    cout << vec1.size() << endl;
    vec1.push_back(10);
    vec1.push_back(20);
    cout << "After push_back() Function:\n";
    cout << vec1.size() << endl;
    
    // front()
    cout << "\nfront() Function (Diplay 1st element):\n";
    cout << vec1.front() << endl;
    // back()
    cout << "back() Function (Display last element):\n";
    cout << vec1.back() << endl;

    // begin()
    cout << "\nBefore begin() Function:\n";
    cout << vec1[1] << endl;
    vec1.insert(vec1.begin() + 1, 15); // insert 15 at index 1
    cout << "After begin() Function (Insert 15 at index 1):\n";
    cout << vec1[1] << endl;

    // erase()
    cout << "\nBefore erase() Function:\n";
    cout << vec1[1] << endl;
    vec1.erase(vec1.begin());
    cout << "After erase() Function (Erase 1st element):\n";
    cout << vec1[1] << endl;

    cout << "\nAfter clear() Function (Removes all elements):\n";
    vec1.clear();
    for (int i : vec1) {
        cout << i << endl; // Display all values one by one
    }
    return 0;
}
// Vector Functions
