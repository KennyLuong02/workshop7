#include <string>
#include "Appliance.h"
#include "TV.h"

using namespace std;

TV::TV(): Appliance::Appliance(), screenSize(0) {};

TV::TV(int powerRating, double screenSize): Appliance::Appliance(powerRating), screenSize(screenSize) {};

void TV::setScreenSize(double screenSize) { this-> screenSize = screenSize; };

double TV::getScreenSize() { return screenSize; };

double TV::getPowerConsumption() {
    double power_consumption;
    power_consumption = get_powerRating() * (getScreenSize() * 0.1);
    return power_consumption;
};
