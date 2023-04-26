#ifndef FRIDGE_H
#define FRIDGE_H
#include <string>
#include "Appliance.h"

using namespace std;

class Fridge: public Appliance {
    private:
        double volume;

    public:
        Fridge();
        Fridge(int powerRating, double volume);

        void setVolume(double volume);
        double getVolume();

        double getPowerConsumption();

};
#endif