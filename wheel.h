#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;


class Wheel {
private:
    int size;       // Renkaan koko tuumina
    string type;    // Renkaan tyyppi

public:
    // Oletuskonstruktori
    Wheel();

    // Parametrinen konstruktori
    Wheel(int s, string t);

    // Getterit
    int getSize() const;
    string getType() const;

    // Setterit
    void setSize(int s);
    void setType(string t);
};

#endif
