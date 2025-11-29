#include "Car.h"
#include <iostream>

// Konstruktori: Asettaa merkin ja mallin
Car::Car(string b, string m)
    : brand(b), model(m) {}

// Asettaa merkin
void Car::setBrand(string b) {
    brand = b;
}

// Asettaa mallin
void Car::setModel(string m) {
    model = m;
}

// Luo moottorin valmiilla arvoilla
void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

// Luo kaikki neljä rengasta valmiilla arvoilla
void Car::setWheels() {
    for (int i = 0; i < 4; i++) {
        wheels[i].setSize(17);
        wheels[i].setType("kesarengas");
    }
}

// Tulostaa kaikki auton tiedot näytölle
void Car::printDetails() const {
    // Auto : Corolla Toyota
    cout << "Auto : " << model << " " << brand << endl;

    // Moottori: 150 hp, 2 L
    cout << "Moottori: "
         << engine.getHorsepower() << " hp, "
         << engine.getDisplacement() << " L" << endl;

    // Tulostetaan kaikki renkaat
    for (int i = 0; i < 4; i++) {
        cout << "Rengas " << i + 1 << ": "
             << wheels[i].getSize() << " tuumaa, "
             << wheels[i].getType() << endl;
    }
}
