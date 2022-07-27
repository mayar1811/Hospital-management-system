#include "Room.h"
Room::Room() {
	 RoomID='NULL';
	 Numofbeds=0;
	 NumofAvailablebeds =0;
}
Room::Room(string roomid, int numofbeds, int numofavailablebeds) {
	RoomID = roomid;
	Numofbeds = numofbeds;
	NumofAvailablebeds = numofavailablebeds;
}
