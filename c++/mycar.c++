// car model year

#include <iostream>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    // Constructor
    Car(const string& car_make, const string& car_model, int car_year) :
        make(car_make), model(car_model), year(car_year) {}

    // Setter functions
    void setMake(const string& car_make) {
        make = car_make;
    }

    void setModel(const string& car_model) {
        model = car_model;
    }

    void setYear(int car_year) {
        year = car_year;
    }

    // Getter functions
    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    // Creating a Car object
    Car myCar("Toyota", "Corolla", 2022);

    // Getting and displaying car information
    cout << "Make: " << myCar.getMake() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    // Setting new values for attributes
    myCar.setMake("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2020);

    // Displaying updated car information
    cout << "\nUpdated Information:" << endl;
    cout << "Make: " << myCar.getMake() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
