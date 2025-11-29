#include "Engine.h"

// Oletuskonstruktori: asettaa arvot 0 ja 0.0
Engine::Engine() : horsepower(0), displacement(0.0) {}

// Parametrinen konstruktori: asettaa annetut arvot
Engine::Engine(int hp, double disp)
    : horsepower(hp), displacement(disp) {}

// Palauttaa hevosvoimat
int Engine::getHorsepower() const {
    return horsepower;
}

// Palauttaa tilavuuden
double Engine::getDisplacement() const {
    return displacement;
}

// Asettaa hevosvoimat
void Engine::setHorsepower(int hp) {
    horsepower = hp;
}

// Asettaa moottorin tilavuuden
void Engine::setDisplacement(double disp) {
    displacement = disp;
}
