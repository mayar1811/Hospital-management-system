#pragma once
#include<iostream>
using namespace std;
class Admin
{
private:
	string username;
	string password;

public:
	Admin();
	Admin(string Username, string Password);
	void addStaff();
	void removeStaff();
	void updateStaff();
	void searchForStaffByID();
	void searchForStaffByName();
	void getRooms();
	void addDepartment();
	void deleteDepartment();
	void enrollStaffToDepartment();
	void deleteStaffFromDepartment();
	void changeManagerOfDEpartment();
	void checkForDoctorOfPatient();
	void checkRoomNumber();
	void checkStatusOfRoom();
	void registeringPatients();
	void giveIDToPatient();
	void checkAvailabilityOfDoctor();




};

