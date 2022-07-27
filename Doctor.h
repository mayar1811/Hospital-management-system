#pragma once
#include"person.h"
class Doctor :public person
{
private:
	string Department;
	string Specialization;
	double Rank;

public:
	Doctor(); 
	Doctor(string Id, string fName, string lName, string Gender, int Age, string mobNum, string add, string department, string specialization,double rank);
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
	void setRank(double rank)
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
	double getRank()
	{
		return Rank ;
	}

};

