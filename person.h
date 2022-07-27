#pragma once
#include<iostream>
using namespace std;

class person
{
private:
	string id;
	string firstName;
	string lastName;
	string gender;
	int age;
	string mobNumber;
	string address;
public:
	person();
	person(string Id, string fName, string lName, string Gender, int Age, string mobNum,string add);
	void setId(string Id) {
		id = Id;
	}
	void setFName(string fName) {
		firstName = fName;
	}
	void setLName(string lName) {
		lastName = lName;
	}
	void setGender(string Gender) {
		gender = Gender;
	}
	void setAge(int Age) {
		age = Age;
	}
	void setMobNum(string mobNum) {
		mobNumber = mobNum;
	}
	void setAddress(string add) {
		address = add;
	}
	string getId() {
		return id;
	}
	string getFName() {
		return firstName;
	}
	string getLName() {
		return lastName;
	}
	string getGender() {
		return gender;
	}
	int getAge() {
		return age;
	}
	string getMobNum() {
		return mobNumber;
	}
	string getAddress() {
		return address;
	}
	virtual void drawSalary() = 0;












};

