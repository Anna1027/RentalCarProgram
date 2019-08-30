#include "RentalCar.h"
#include <iostream>

RentalCar::RentalCar(std::string ag, std::string loc, std::string model, unsigned int days, std::string renter):
agency{ag}, location{loc}, Rental(renter, days),Car{model} // initializer list, call Rental and car constructors
{
  std::cout<<"Enter drive's license number:"<<"\n";
  std::cin>>driverLicense;

  std::cout << "Rental Car created for " << agency << " at " << location << "\n"; 
}

std::string RentalCar::get_agency() const{
  return agency;
}

std::string RentalCar::get_location() const{
  return location;
}

std::string RentalCar::get_driverLicense()const{
  return driverLicense;
}
void RentalCar::set_driverLicense(std::string dl){
 driverLicense=dl;
}
void RentalCar::Info(){
  std::cout<<"Agency " <<get_agency()<<"\n ";
  std::cout<<"Location "<<get_location()<<"\n ";
  std::cout<<"Contract Number "<<get_contract_number()<<"\n ";
  std::cout<<"Driver License "<<get_driverLicense()<<"\n ";
  std::cout<<"Car Model " <<getModel()<<"\n ";
  std::cout<<"starting Mileage "<<getMileage()<<"\n ";
  std::cout<<"Rental Length "<<get_rental_length()<<"\n ";
}

