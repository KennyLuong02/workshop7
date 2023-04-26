#include <string>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

Fridge::Fridge(): Appliance::Appliance(), volume(0) {};

Fridge::Fridge(int powerRating, double volume): Appliance::Appliance(powerRating), volume(volume) {};

void Fridge::setVolume(double volume) { this-> volume = volume; };

double Fridge::getVolume() { return volume; };

double Fridge::getPowerConsumption() {
    double power_consumption;
    power_consumption = get_powerRating() * 24 * (volume * 0.01);
    return power_consumption;
};