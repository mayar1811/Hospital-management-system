#pragma once
#include"person.h"
class Receptionist:public person
{
private:
	string username;
	string password;

public:
	Receptionist();
	Receptionist(string Id, string fName, string lName, string Gender, int Age, string mobNum, string add,string Username, string Password);
	bool checkAvailabilityOfRoom();
	void bookRoomForPatient();
	void generateBills();
	void drawSalary();

};

