#include <iostream>
#include "Appliance.h"

using namespace std;

class A: public Appliance {
    //private:

    public:
        A(): Appliance(){};
        A(int num): Appliance(num) {};
        double getPowerConsumption() {
            double powerConsumption = 10;
            return powerConsumption;
        }
    
};

int main() {
    Appliance* a = new A(90);

}