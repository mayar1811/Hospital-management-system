#include "Doctor.h"
Doctor::Doctor() {
	Department = 'NULL';
	Specialization = 'NULL';
	Rank = 0.0;
}
Doctor::Doctor( string Id, string fName, string lName, string Gender, int Age, string mobNum, string add, string department, string specialization,double rank) :person(Id, fName, lName, Gender, Age, mobNum, add) {
	Department = department;
	Specialization = specialization;
	Rank = rank;
}

void Doctor::drawSalary()
{
}
