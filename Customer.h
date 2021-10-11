#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;
/*
  Customer
    Variables
    - First Name String
    - Last Name String 
    - Phone Int (Use regex to remove delimiters in input)
    - Address String 
    - E-mail String
    - ID Info (State, ID#) String[2] 
    - Vehicle License Plate String
    Methods
    - Constructor (empty & with params)
    - Getters / Setters
    - Search methods
*/
class Customer {
  public:
    Customer();
    Customer(string, string, int, string, string, string, string);
    void 
  private:
    string fName;
    string lName;
    int phone;
    string address;
    string email;
    string idInfo[2];
    string license;
}


#endif