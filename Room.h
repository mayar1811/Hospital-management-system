#pragma once
#include<iostream>
#include"Nurse.h"
using namespace std;
class Room
{
private:
	string RoomID;
	int Numofbeds;
	int NumofAvailablebeds;
	Nurse ResponsibleNurse;

public:
	Room();
	Room(string roomid,int numofbeds, int numofavailablebeds);
	void setRoomID(string roomid) {
		RoomID=roomid;
	}
	void setNumofbeds(int numofbeds) {
		Numofbeds = numofbeds;
	}
	void setNumofAvailablebeds(int numofavailablebeds) {
		NumofAvailablebeds = numofavailablebeds;
	}
	void setResponsibleNurse(Nurse& responsiblenurse) {
         
	}
	string getRoomID() {
		return RoomID;
	}
	int getNumofbeds() {
		return Numofbeds;
	}
	int getNumofAvailablebeds() {
		return NumofAvailablebeds;
	}
	


};

