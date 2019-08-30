#include <string>

#ifndef RENTAL_H
#define RENTAL_H

class Rental{

public:
Rental(){}
Rental(std::string, unsigned int);// name, days
std::string get_renter_name() const;
unsigned int get_contract_number() const;
unsigned int get_rental_length() const;
Rental& operator++(); // pre-increment
Rental operator++(int); // post-increment

private:
unsigned int contract_number;
std::string renter_name;
unsigned int rental_length;
static unsigned int start_contract;
static unsigned int next_contract;

};


#endif