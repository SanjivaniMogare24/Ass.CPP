#include <iostream>
using namespace std;

class vehicle {
public:
    vehicle() { // Constructor
        cout << "I am a vehicle" << endl;
    }
};

class twoWheeler : public vehicle {
public:
    twoWheeler() { // Constructor
        cout << "I have two wheels" << endl;
    }
};

class bike : public twoWheeler {
public:
    bike() { // Constructor
        cout << "I am a bike" << endl;
    }
};

int main() {
    bike myBike; // Creates a bike object
    return 0;
}