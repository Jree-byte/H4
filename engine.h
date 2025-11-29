#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    // Oletuskonstruktori
    Engine();
    // Parametrinen konstruktori
    Engine(int hp, double disp);

    // Getterit
    int getHorsepower() const;
    double getDisplacement() const;

    // Setterit
    void setHorsepower(int hp);
    void setDisplacement(double disp);
};

#endif
