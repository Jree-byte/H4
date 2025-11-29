#include "Wheel.h"

// Oletuskonstruktori
Wheel::Wheel() : size(0), type("unknown") {}

// Parametrinen konstruktori
Wheel::Wheel(int s, string t)
    : size(s), type(t) {}

// Getterit
int Wheel::getSize() const { return size; }
string Wheel::getType() const { return type; }

// Setterit
void Wheel::setSize(int s) { size = s; }
void Wheel::setType(string t) { type = t; }
