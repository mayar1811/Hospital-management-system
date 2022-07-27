#pragma once
#include"person.h"
class Nurse:public person
{
private:
	string Department;
	string Specialization;
public:
	Nurse();
	Nurse( string Id, string fName, string lName, string Gender, int Age, string mobNum, string add, string department, string specialization);
	void drawSalary();
	void assignedRooms();
};

