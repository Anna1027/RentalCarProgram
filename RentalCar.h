#include "Car.h"
#include "Rental.h"

class RentalCar : public Car, public Rental {

public:
RentalCar(){};
// agency/location/model/length/renter name
RentalCar(std::string, std::string, std::string, unsigned int, std::string);
std::string get_agency() const;
std::string get_location() const;
void set_driverLicense(std::string);
std::string get_driverLicense()const;
void Info();

private:
std::string agency;
std::string location;
std::string driverLicense;

};