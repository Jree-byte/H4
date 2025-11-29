#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include "Engine.h"
#include "Wheel.h"

using namespace std;


class Car {
private:
    Engine engine;        // Auton moottori
    Wheel wheels[4];      // Neljä rengasta
    string brand;         // Auton merkki
    string model;         // Auton malli

public:
    // Konstruktori: vastaanottaa merkin ja mallin
    Car(string brand, string model);

    // Setterit autolle
    void setBrand(string b);
    void setModel(string m);

    // Asettaa moottorille valmiit ominaisuudet
    void setEngine();

    // Asettaa renkaiden ominaisuudet kaikille 4 renkaalle
    void setWheels();

    // Tulostaa auton kaikki tiedot
    void printDetails() const;
};

#endif
