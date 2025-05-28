#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {1, 3, 5, 3, 6};

    cout << "Integer Vector:\n";
    for (int i : vec1) {
        cout << i << endl;
    }

    vector<char> vec2 = {'q', 'd', 'g', 'a'};

    cout << "\nCharacter Vector:\n";
    for (char c : vec2) {
        cout << c << endl;
    }

    return 0;
}
