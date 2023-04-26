#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <string>

using namespace std;

class Appliance {
    protected:
        int powerRating;
        bool isOn;

    public:
        Appliance() {};
        Appliance(int powerRating) {}; // creates an Appliance with a power rating

        void turnOn() {};
        void turnOff() {};

        void set_powerRating(int pRating) {};
        int get_powerRating() {};

        virtual double getPowerConsumption() = 0;

};
#endif