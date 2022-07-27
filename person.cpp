#include "person.h"
person::person() {
	id = 'NULL';
	firstName = 'NULL';
	lastName='NULL';
	gender = 'NULL';
	age=0;
    mobNumber='NULL';
	address='NULL';
}
person::person(string Id, string fName, string lName, string Gender, int Age, string mobNum, string add) {
	id = Id;
	firstName = fName;
	lastName = lName;
	gender = Gender;
	age = Age;
	mobNumber = mobNum;
	address = add;
}
