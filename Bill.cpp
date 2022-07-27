#include "Bill.h"
Bill::Bill() {
	BillNum = 'NULL';
	PatientName = 'NULL';
	PatientID = 'NULL';
	TotalAmount = 0.0;
}
Bill::Bill(string Billnum, string Patientname, string Patientid, MedicalServices* Medsev, double Totalamount) {
	BillNum = Billnum;
	PatientName = Patientname;
	PatientID = Patientid;
	TotalAmount = Totalamount;
	//medical services
}
double totalPrice() {
	return 0;
}
