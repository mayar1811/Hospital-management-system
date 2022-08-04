#pragma once
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cstdio>
#include<string>
#include"Doctor.h"
#include"Nurse.h"
#include"Receptionist.h"
using namespace std;
class Admin
{
private:
	string username;
	string password;

public:
	Admin();
	Admin(string Username, string Password);
	void addDoctor(Doctor&d,string S,fstream&f);
	void addNurse(Nurse&n,string S,fstream&f);
	void addReceptionist(Receptionist&r,string S,fstream&f);
	void deleteDoctor();
	void deleteNurse();
	void deleteReceptionist();
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

