#include <iostream>
#include "Car.h"

int main() {


    Car car("Toyota", "Corolla");

    // Asetetaan moottorin tiedot
    car.setEngine();

    // Asetetaan kaikkien renkaiden tiedot
    car.setWheels();

    // Tulostetaan auton tiedot
    car.printDetails();

    return 0;
}
