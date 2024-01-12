#include<iostream>
using namespace std;

class Vehicle {
protected:
    string model;
    double speed;

public:
    Vehicle(string model, double speed) {
        this->model = model;
        this->speed = speed;
    }

    virtual void displayDetails() {
        cout << "Model: " << model << ", Speed: " << speed << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string model, double speed) : Vehicle(model, speed) {}

    void displayDetails() override {
        cout << "Car Details -> ";
        Vehicle::displayDetails();
    }
};

class Bike : public Vehicle {
public:
    Bike(string model, double speed) : Vehicle(model, speed) {}

    void displayDetails() override {
        cout << "Bike Details -> ";
        Vehicle::displayDetails();
    }
};

int main() {
    Vehicle* vehicles[2];
    vehicles[0] = new Car("Toyota", 60);
    vehicles[1] = new Bike("Yamaha", 40);

    for(int i = 0; i < 2; i++) {
        vehicles[i]->displayDetails();
    }

    delete vehicles[0];
    delete vehicles[1];

    return 0;
}

