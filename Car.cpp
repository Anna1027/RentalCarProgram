#include "Car.h"
#include <iostream>

  Car::Car(){}
  Car::Car(std::string name):
  model{name}
  {
    std::cout << "\nCar object created for " << name << "\n";
  }

  double Car::getMileage() const{
    return mileage;
  }

  double Car::getAvailableFuel() const{
    return availableFuel;
  }

  double Car::getFuelCapacity() const{
    return fuelCapacity;
  }

  std::string Car::getModel() const{
    return model;
  }

  bool Car::drive(double miles){
    double gallonsNeeded = miles / mpg;
    if (gallonsNeeded > getAvailableFuel()){
      return false;
    }
    else{
      useFuel(gallonsNeeded);
      addMiles(miles);
      return true;      
    }
  }

  void Car::refuel(){
    availableFuel = fuelCapacity;
  }

  void Car::addMiles(double miles){
    mileage += miles;
  }

  void Car::useFuel(double gallons){
    availableFuel -= gallons;
  }