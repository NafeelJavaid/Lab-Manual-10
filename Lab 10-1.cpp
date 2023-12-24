#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> myVector; 
    for (int i = 1; i <= 4; ++i)
        myVector.push_back(i);
    cout << "Elements in the vector: ";
    for (auto y = myVector.begin(); y != myVector.end(); ++y)
        cout << *y << " ";
        cout << endl;
          myVector.push_back(5);
        cout << "Vector after pushing 5: ";
    for (auto y = myVector.begin(); y != myVector.end(); ++y)
        cout << *y << " ";
        cout << endl;
    if (!myVector.empty() && myVector.size() > 2) {
        auto itToRemove = myVector.begin() + 1; 
        myVector.erase(itToRemove);
    }
     cout << "Vector after removing element at position 2: ";
    for (auto y = myVector.begin(); y != myVector.end(); ++y)
        cout << *y << " ";
         cout <<endl;
     return 0;
}