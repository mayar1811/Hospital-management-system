#include "Nurse.h"
Nurse::Nurse() {
	Department = 'NULL';
	Specialization = 'NULL';
}
Nurse::Nurse(string Id, string fName, string lName, string Gender, int Age, string mobNum, string add, string department, string specialization) :person(Id,fName , lName, Gender, Age, mobNum, add) {
	Department = department;
	Specialization = specialization;

}

void Nurse::drawSalary()
{
}
