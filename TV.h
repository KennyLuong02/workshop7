#ifndef TV_H
#define TV_H
#include <string>
#include "Appliance.h"

using namespace std;

class TV: public Appliance {
    private:
        double screenSize; // screen size in inches

    public:
        TV();
        TV(int powerRating, double screenSize);

        void setScreenSize(double screenSize);
        double getScreenSize();

        double getPowerConsumption();

};
#endif