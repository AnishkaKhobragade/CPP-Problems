#include <string>
#include <iostream>

using namespace std;

class Car {
public:
    Car(int year, std::string make);
    int getYearModel() const;
    string getMake() const;
    int getSpeed() const;
    void accelerate();
    void brake();

private:
    int yearModel;
    string make;
    int speed;
};

Car::Car(int year, std::string make) {
    this->yearModel = year;
    this->make = make;
    this->speed = 0;
}

int Car::getYearModel() const {
    return this->yearModel;
}

std::string Car::getMake() const {
    return this->make;
}

int Car::getSpeed() const {
    return this->speed;
}

void Car::accelerate() {
    this->speed += 5;
}

void Car::brake() {
    if (this->speed >= 5) {
        this->speed -= 5;
    } else {
        this->speed = 0;
    }
}


int main() {
    Car myCar(2023, "Honda");
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }
    return 0;
}
