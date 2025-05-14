// Linear Search in Array
#include <iostream>
using namespace std;

class Linera {
private:
    int a[10];
    int target;

public:
    Linera() {
        int temp[10] = {7, 14, 3, 19, 1, 12, 8, 16, 5, 10};
        for (int i = 0; i < 10; i++) {
            a[i] = temp[i];
        }
    }

    void input() {
        cout << "Enter the element you want to search: ";
        cin >> target;
    }

    void display() {
        bool found = false;
        for (int i = 0; i < 10; i++) {
            if (a[i] == target) {
                cout << "Found at index " << i << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Not found in the array." << endl;
        }
    }
};

int main() {
    Linera l;
    l.input();
    l.display();
    return 0;
}
