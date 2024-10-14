#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
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
transform(cars.begin(), cars.end(), cars.begin(), [](string &s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    });
    cout<<"Displaying all the cars: "<<endl;
    for (const auto& car : cars) {
        cout << car << endl;
    }

    cout<<"DO you want to search a car model you forgot ?, Enter that model: "<<endl;
    cin>>it;
    for (auto& chars: it){
        chars=tolower(chars);
    }
    cout<<"you are searching for: "<<it<<endl;

    auto temp=find(cars.begin(), cars.end(), it);
    if(temp!= cars.end()){

        cout<<"found";
    }
    else{

        cout<<"not found";
    }

    return 0;
}
