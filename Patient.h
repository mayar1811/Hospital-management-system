#pragma once
#include<iostream>
using namespace std;
class Patient
{
private:
	int ID;
	string Name;
	int PhoneNumber;
	string Address;
	int Age;
	string Gender;

public:
	Patient();
	Patient(int id, string name, int phonenumber, string add, int age, string gender);
	void setID(int id) {
		ID = id;
	}
	void setName(string name) {
		Name=name;
	}
	void setPhoneNum(int phonenumber) {
		PhoneNumber=phonenumber;
	}
	void setAddress(string add) {
		Address=add;
	}
	void setAge (int age) {
		Age= age;
	}
	void setGender(string gender) {
		Gender=gender;
	}
	int getID() {
		return ID;
	}
	string getName() {
		return Name;
	}
	int getPhoneNum() {
		return PhoneNumber;
	}
	string getAddress() {
		return Address;
	}
	int getAge() {
		return Age;
	}
	string getGender() {
		return Gender;
	}





};

