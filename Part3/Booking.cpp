//Author: Zachery Utt

#include <algorithm>
#include "Booking.h"

//Booking Constructor
Booking::Booking(std::vector<Flight*>& flights) : flights(flights) {

};

//returns a copy of the flights member
//which hold pointers to the Flight objects
std::vector<Flight*> Booking::getFlights() {
  return flights;
}

//equality operator
//two bookings are equivalent iff they contain equivalent vectors with the same flights
bool Booking::operator==(const Booking& rhs) const
{
  if (rhs.flights.size() != this->flights.size())
    return false;

  std::vector<Flight*> sortedFlights1(this->flights);
  std::vector<Flight*> sortedFlights2(rhs.flights);
  std::sort(sortedFlights1.begin(), sortedFlights1.end());
  std::sort(sortedFlights2.begin(), sortedFlights2.end());
      
  return sortedFlights1 == sortedFlights2;
}
