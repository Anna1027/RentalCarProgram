#include "RentalCar.h"
#include <iostream>
#include <string>
using namespace std;


int main() {

// agency, location, model, length, renter name
  std::string agency = "ABC Rentals ";
  std::string location = "Airport ";
  std::string model = "Ford ";
  unsigned int days = 8 ;
  std::string renter = "Joe ";
 

  RentalCar carA{agency, location, model, days, renter};

  cout << carA.getMileage() << "\n ";
  cout << carA.get_renter_name() << "\n ";
  cout << carA.get_agency() << "\n";
  cout << carA.get_driverLicense() <<"\n ";
  cout<<"Update License: ";
  std::string driverLicense;
  cin>>driverLicense;
  carA.set_driverLicense(driverLicense);
  cout<< carA.get_driverLicense()<<"\n ";

  carA.Info();
}


