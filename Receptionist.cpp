#include "Receptionist.h"
Receptionist::Receptionist() {
	username = 'NULL';
	password = 'NULL';
}
Receptionist::Receptionist(string Id, string fName, string lName, string Gender, int Age, string mobNum, string add,string Username, string Password) :person(Id, fName, lName, Gender, Age, mobNum, add) {
	username = Username;
	password = Password;

}
void Receptionist::drawSalary()
{

}
