#include <iostream>

using namespace std;

class Car {
    int speed;
public:
    Car() {
        speed = 999;
        cout << "Damn, this car is freakin fast";
    }

    void PrintGeniusInfo() {
        cout << "This car has speed: " << speed;
    }

};

int main()
{
    Car car;
    car.PrintGeniusInfo();
}
