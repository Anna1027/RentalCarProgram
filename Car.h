#include <string>

#ifndef CAR_H
#define CAR_H

class Car {

  public:
    // constructors
    Car();
    Car(std::string); // initialize model

    double getMileage() const;
    double getAvailableFuel() const;
    double getFuelCapacity() const;
    std::string getModel() const;
    
    bool drive(double);
    void refuel();

  private:

    std::string model;
    double mpg = 20;
    double mileage{10000};
    double availableFuel{15};
    double fuelCapacity{15};

    void addMiles(double);
    void useFuel(double);
};

#endif