#pragma once
#include"person.h"
class Doctor :public person
{
private:
	string Department;
	string Specialization;
	int Rank;

public:
	Doctor(); 
	Doctor(string Id, string fName, string lName, string Gender, int Age, string mobNum, string add, string department, string specialization,int rank);
	void prescribeMedecine();
	void CheckReports();
	void drawSalary();
	void setDepartment(string department) {
		Department = department;
	}
	void setSpecialization(string specialization)
	 {
		Specialization = specialization;
	}
	void setRank(int rank)
	{
			Rank = rank ;
	}
	string getDepartment() {
		return Department ;
	}
	string getSpecialization()
	{
		return Specialization;
	}
	int getRank()
	{
		return Rank ;
	}

};

