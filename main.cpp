#include <iostream>
#include <string>
#include <vector>
#include "Room.h"
using namespace std;

vector<Room> roomList;
int main() {

  int option = 0;
  do{
    cout << string(50,'_') << endl;
    cout << "ALL OPTIONS" << endl;
    cout << string(50,'-') << endl;
    cout << "0. Show Options" <<endl;
    cout << "1. Show all rooms and their current status" <<endl;
    cout << "2. Show rooms and who is staying in the room for each day for the next 7 days." << endl;
    cout << "3. Show all reservations in the system" << endl;
    cout << "4. Show housekeeping screen" << endl;
    cout << "5. Show Guest information" << endl;
    cout << "6. Show information about a guest certain stay" << endl;
    cout << "7. Show guest search screen" << endl;
    cout << "8. Show daily report screen" << endl;
    cout << "-1. Exit Program" << endl;
    cout << string(50,'_') << endl;
    cout << "Please Enter Menu Number: ";
    cin >> option;
  
    switch(option) {
      case 0: 
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        cout << "";
        break;
      case 6:
        cout << "";
        break;
      case 7:
        break;
      case 8:
        break;
      default:
        cout << "\n\nPlease enter a valid input! (0-8)\n\n";
        break;
    }
  }while(option >= 0);
  cout << "Now Exiting Program" << endl;
}
/*
  Controller
    -CompleteRoomList vector<Room>
  Room
    -roomStatus char A O D M
    -roomType string King (K), Double Queen (DQ), Double Queen with Kitchen (DBK), Suite (S)
    -roomPrice Double
    houseKeeping
  HouseKeep
    -Housekeep Name string
    -Room number int
    -Type string, 
    -Status char, 
    -Bathroom bool,  
    -Towels bool,
    -Bed Sheets bool, 
    -Vacuum bool,  
    -Dusting bool, 
    -Electronics bool
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
  Customer
    - First Name String
    - Last Name String 
    - Phone Int (Use regex to remove delimiters in input)
    - Address String 
    - E-mail String
    - ID Info (State, ID#) Map
    - Vehicle License Plate String
    - Customer search screen needs to account for case sensitivity
  
  Daily Report & Customer Search
    - Call data from classes/database
*/

void display1(){

}
void display2(){

}
void display3(){

}
void display4(){

}
void display5(){

}
void display6(){

}
void display7(){

}
void display8(){
  
}
