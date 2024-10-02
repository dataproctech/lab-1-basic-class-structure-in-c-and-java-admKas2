// include the necessary libraries
#include<iostream>
using namespace std;

class Car {
    //attributes
    string make;
    string model;
    int year;
    // Constructor
public:
    Car(){
        this->make = "no data";
        this->model = "no data";
        this->year = -1;
    }

    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }
    // Method to display car information
    void displayInfo() {
        cout << make << " " << model << " " << year << endl;
    }
};

int main() {
    // Create a Car object
    Car obj = Car("Volkswagen", "Golf", 2003);
    // Display car details
    obj.displayInfo();
    
    return 0;
}
