#ifndef ROOM_H
#define ROOM_H

enum Room_type{
  KING='K',
  DOUBLE_QUEEN=,
  DOBULE_QUEEN,
  SUITE='S'
};
// Room
//     -roomStatus char A O D M
//     -roomType string King (K), Double Queen (DQ), Double Queen with Kitchen (DBK), Suite (S)
//     -roomPrice Double
//     houseKeeping
class Room{
  public:

  private:
      char roomStatus;
      Room_type rootType;
      double roomPrice;
      HouseKeeping houseKeeper;
};

#endif