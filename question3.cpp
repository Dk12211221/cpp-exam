#include<iostream>
using namespace std;

class Vehicle {
private:
    string model;
    double speed;

public:
    Vehicle(string model, double speed) {
        this->model = model;
        this->speed = speed;
    }

    void setModel(string model) {
        this->model = model;
    }

    string getModel() {
        return model;
    }

    void setSpeed(double speed) {
        this->speed = speed;
    }

    double getSpeed() {
        return speed;
    }

    virtual double timeTaken(double distance) {
        return distance / speed;
    }
};

class Car : public Vehicle {
public:
    Car(string model, double speed) : Vehicle(model, speed) {}

    double timeTaken(double distance) override {
        return Vehicle::timeTaken(distance);
    }
};

class Bike : public Vehicle {
public:
    Bike(string model, double speed) : Vehicle(model, speed) {}

    double timeTaken(double distance) override {
        return Vehicle::timeTaken(distance);
    }
};

int main() {
    Car car("Toyota", 60);
    Bike bike("Yamaha", 40);

    double distance = 100;  

    cout << "Time taken by car: " << car.timeTaken(distance) << " hours" << endl;
    cout << "Time taken by bike: " << bike.timeTaken(distance) << " hours" << endl;

    return 0;
}

