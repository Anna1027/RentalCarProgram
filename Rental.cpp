#include "Rental.h"
#include <iostream>

unsigned int Rental::start_contract = 1001;
unsigned int Rental::next_contract = 1001;

Rental::Rental(std::string name, unsigned int days){
  renter_name = name;
  rental_length = days;
  contract_number = next_contract;
  next_contract++;
  std::cout << "Rental object created for " << name << "\n";
}

std::string Rental::get_renter_name() const{
  return renter_name;
}

unsigned int Rental::get_contract_number() const{
  return contract_number;
}

unsigned int Rental::get_rental_length() const{
  return rental_length;
}

Rental& Rental::operator++(){ // pre-increment
  rental_length += 1;
  return *this;
}

Rental Rental::operator++(int){ // post-increment
  Rental temp{*this};
  rental_length += 1;
  return temp;
}