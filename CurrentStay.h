#IFNDEF CURRENTSTAY_H
#DEFINE CURRENTSTAY_H


#include <string>
using namespace std;


/*
  CurrentStay
    -Guest Name string, 
    -Check In Date and Time time_t,
    -Expected Check Out Date and Time time_t,  
    -Room Type, string
    -Room Number, Int
    -Room Rate ($/Day), Double
    -Total Charge, Double
    -Payments Made, Double
    -Balance Double
*/


class CurrentStay{
  public:

  private:
  string guestName;
  time_t chkInTime;
  time_t chkOutTime;
  string roomType;
  int roomNumber;
  double roomRate
  double totalCharge;
  double paymentMade;
  double balance;
  
}


#ENDIF