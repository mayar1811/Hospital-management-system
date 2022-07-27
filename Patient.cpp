#include "Patient.h"
Patient::Patient() {
	ID=0;
	Name='NULL';
	PhoneNumber=0;
	Address='NULL';
	Age=0;
	Gender='NULL';
}
Patient::Patient(int id, string name, int phonenumber, string add, int age, string gender) {
	ID = id;
	Name = name;
	PhoneNumber = phonenumber;
	Address = add;
	Age = age;
	Gender = gender;
}

