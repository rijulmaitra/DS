// Linear Search in Array
#include <iostream>
#include <algorithm>
using namespace std;

class LinearSearch{
    public:
        void Linear(){
            int a[]={24,56,34,69,12};
            int n=sizeof(a)/sizeof(a[0]);
            bool flag=false;
            int target;
            cout<< "Enter the number you want to search: ";
            cin>> target;

            for (int i = 0; i < n; i++){
                if (a[i]==target){
                    flag=true;
                    break;
                }
            }
            if(flag==true){
                cout<<target<<" is present in the array!"<<endl;
            }
            else{
                cout<<target<<" number not found."<<endl;
            }
        }
};
int main() {
    LinearSearch l;
    string answer;
    while (true)
    {
        l.Linear();
        cout << "Do you want to exit?(yes/no): ";
        cin >>answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        if(answer=="yes"){
            break;
        }
    }
    return 0;
}