#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<string> cars;
    string car, it;

    // Asking the user to enter 3 car models
    cout << "Enter 3 car models:" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> car;
        cars.push_back(car);
    }

    // Adding "Edison" and "Wilson" to the vector
    cars.push_back("Edison");
    cars.push_back("Wilson");
    cars.insert(cars.begin() +0, "Eddy");
// cout<<"enter a name of car you want to search for: "<<endl;
// cin>>it;

    // Displaying all the cars
    for (const auto& car : cars) {
        cout << car << endl;
    }

    return 0;
}
