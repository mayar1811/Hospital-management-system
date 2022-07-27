#pragma once
#include<iostream>
#include"MedicalServices.h"
using namespace std;
class Bill 
{
private:
	string BillNum;
	string PatientName;
	string PatientID;
	MedicalServices MedSev[3];
	double TotalAmount;
public:
	Bill();
	Bill(string Billnum, string Patientname, string Patientid, MedicalServices* Medsev, double Totalamount);
	double totalPrice();

	

};

