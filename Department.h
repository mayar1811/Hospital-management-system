#pragma once
#include<iostream>
#include<list>
#include"Doctor.h"
using namespace std;
class Department
{
private:
	string ID;
	string Name;
	string Manager;
	list<Doctor>Doc;

public:
	Department();
	Department(string id,string name,string manager);
	void setID(string id) {
		ID = id;
	}
	void setName(string name) {
		Name = name;
	}
	void setManager(string manager) {
		Manager =manager ;
	}
	string getID() {
		return ID ;
	}
	string getName() {
		return Name ;
	}
	string getManager() {
		return Manager ;
	}


};

