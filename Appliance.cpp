#include <string>
#include "Appliance.h"

using namespace std;

Appliance::Appliance() {
    powerRating = 0;
    isOn = false;
};

Appliance::Appliance(int powerRating) {
    this-> powerRating = powerRating;
    isOn = false;
};

int Appliance::get_powerRating() {
    return powerRating;
};

void Appliance::set_powerRating(int pRating) {
    powerRating = pRating;
};

void Appliance::turnOn() {
    isOn = true;
};

void Appliance::turnOff() {
    isOn = false;
};