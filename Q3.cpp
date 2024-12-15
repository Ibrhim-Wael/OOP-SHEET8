#include <iostream>
using namespace std;
class Vehicle {
protected:
    string brand;

public:
  void setBrand(const string& b) {
  brand = b;
    }
};
class Engine {
protected:
    int horsepower;
public:
    void setHorsepower(int hp) {
     horsepower = hp;
    }
};
class Car : public Vehicle, public Engine {
public:
    void displayCarDetails() {
    cout << "Car Brand: " << brand << endl;
    cout << "Horsepower: " << horsepower << " HP" << endl;
    }
};

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setHorsepower(300);
    myCar.displayCarDetails();

    return 0;
}
