#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include"Doctor.h"
using namespace std;
Doctor addStaff(Doctor &d1) {
	int age;
	double Rank;
	string FirstName, LastName, Gender, Address, Department, Specialization, mobNumber, ID;
	cout << "Enter the ID: ";
	cin >> ID;
	d1.setId(ID);
	cout << "Enter the first name: ";
	cin >> FirstName;
	d1.setFName(FirstName);
	cout << "Enter the last name: ";
	cin >> LastName;
	d1.setLName(LastName);
	cout << "Enter the gender: ";
	cin >> Gender;
	d1.setGender(Gender);
	cout << "Enter the age: ";
	cin >> age;
	d1.setAge(age);
	cout << "Enter the phone number: ";
	cin >> mobNumber;
	d1.setMobNum(mobNumber);
	cout << "Enter the address: ";
	cin >> Address;
	d1.setAddress(Address);
	cout << "Enter the department: ";
	cin >> Department;
	d1.setDepartment(Department);
	cout << "Enter the specialization: ";
	cin >> Specialization;
	d1.setSpecialization(Specialization);
	cout << "Enter the rank: ";
	cin >>Rank;
	d1.setRank(Rank);
	return d1;
}

void writeFile(Doctor& d1,string S,fstream&f) {
	f.open(S, ios::app);
	if (f.is_open()) {
		f<<"ID : "<<d1.getId() << "\n" << "First Name : "<<d1.getFName()
			<< "\n" <<"Last Name : "<< d1.getLName() << "\n" << "Gender : "<<d1.getGender()
			<< "\n" << "Age : "<<d1.getAge() << "\n" << "Phone Number : "<<d1.getMobNum() << "\n"
			<<"Address : "<< d1.getAddress() << "\n" <<"Department : "<< d1.getDepartment()
			<< "\n" << "Specialization : "<<d1.getSpecialization()
			<<"\n"<<"Rank : "<<d1.getRank() << "\n" << std::endl;
		f.close();
	}
}






int main() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM" << endl;
	system("pause");
	system("cls");

	int choice, Attempts = 1;
	string Username, Password="";
	int ch;

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM\n";
	cout << "\t\t\t\t\t\t\t\t\t\t       ----------------------------\n";
	cout << "\t\t\t\t\t\t\t\t\t\tPlease, choose from the following options:\n";
	cout << "\t\t\t\t\t\t\t\t\t__________________________________________________________\n";
	cout << "\t\t\t\t\t\t\t\t       |                                                          |\n";
	cout << "\t\t\t\t\t\t\t\t       | 1 << Admin                                               |\n";
	cout << "\t\t\t\t\t\t\t\t       | 2 << Receptionist                                        |\n";
	cout << "\t\t\t\t\t\t\t\t       | 3 << Doctor                                              |\n";
	cout << "\t\t\t\t\t\t\t\t       | 4 << Nurse                                               |\n";
	cout << "\t\t\t\t\t\t\t\t       |__________________________________________________________|\n";

	cout << "\n\n\n\n\t\t\t\t\t\t\t\tEnter your choice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM\n";
		cout << "\t\t\t\t\t\t\t\t\t\t       ----------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t                 log in \n";
		cout << "\t\t\t\t\t\t\t\t\t\t       ----------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t  Enter your Username: ";
		cin >> Username;
		cout << "\t\t\t\t\t\t\t\t\t\t  Enter your password: ";
		ch = _getch();
		while (ch != 13) {
			Password.push_back(ch);
			cout << " *";
			ch = _getch();

		}
		
		cout << endl;
		while (Password.length() != 13 && Attempts<2 ) {
			system("cls");
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tINVALID PASSWORD" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\tPlease try again," << endl;
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    HOSPITAL MANAGEMENT SYSTEM\n";
			cout << "\t\t\t\t\t\t\t\t\t                   ----------------------------\n";
			cout << "\t\t\t\t\t\t\t\t\t                             log in \n";
			cout << "\t\t\t\t\t\t\t\t\t                   ----------------------------\n";
			cout << "\t\t\t\t\t\t\t\t\t\t    Enter your Username: ";
			cin >> Username;
			cout << "\t\t\t\t\t\t\t\t\t\t    Enter your password: ";
			Password = "";
			ch = _getch();
			while (ch != 13) {
				Password.push_back(ch);
				cout << " *";
				ch = _getch();
			}
			cout << endl;
			Attempts += 1;
		}
		if (Attempts == 2) {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tYOU CANNOT ACCESS \n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM" << endl;
			system("pause");
			return 0;
		}
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM\n";
		cout << "\t\t\t\t\t\t\t\t\t\t       ----------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\tPlease, choose from the following options:\n";
		cout << "\t\t\t\t\t\t\t\t\t_______________________________________________________________________________________            \n";
		cout << "\t\t\t\t\t\t\t\t       |                                                                                       |\n";
		cout << "\t\t\t\t\t\t\t\t       | 1 << Add staff member                                                                 |\n";
		cout << "\t\t\t\t\t\t\t\t       | 2 << Delete staff member                                                              |\n";
		cout << "\t\t\t\t\t\t\t\t       | 3 << Update staff member                                                              |\n";
		cout << "\t\t\t\t\t\t\t\t       | 4 << Search for a staff member using ID                                               |\n";
		cout << "\t\t\t\t\t\t\t\t       | 5 << Search for a staff member using Name                                             |\n";
		cout << "\t\t\t\t\t\t\t\t       | 6 << Get all the rooms that a certain nurse is responsible for                        |\n";
		cout << "\t\t\t\t\t\t\t\t       | 7 << Add a new department                                                             |\n";
		cout << "\t\t\t\t\t\t\t\t       | 8 << Delete department                                                                |\n";
		cout << "\t\t\t\t\t\t\t\t       | 9 << Enroll staff to a certain department                                             |\n";
		cout << "\t\t\t\t\t\t\t\t       | 10 << Delete doctors from a certain department                                        |\n";
		cout << "\t\t\t\t\t\t\t\t       | 11 << Change the responsible doctor for a certain department                          |\n";
		cout << "\t\t\t\t\t\t\t\t       | 12 << Check for the physician (doctor) who medicate a specific patient                |\n";
		cout << "\t\t\t\t\t\t\t\t       | 13 << Check the room number that a patient resides                                    |\n";
		cout << "\t\t\t\t\t\t\t\t       | 14 << Search to know the current status of each room                                  |\n";
		cout << "\t\t\t\t\t\t\t\t       | 15 << Registering the patients, storing their details into the system                 |\n";
		cout << "\t\t\t\t\t\t\t\t       | 16 << Give a unique id for every patient automatically                                |\n";
		cout << "\t\t\t\t\t\t\t\t       | 17 << Check the availability of a doctor                                              |\n";
		cout << "\t\t\t\t\t\t\t\t       |_______________________________________________________________________________________|\n";
		cout << endl;
		int a1;
		cout << "\t\t\t\t\t\t\t\t         Select one choice: ";
		cin >> a1;
		int option;
		if (a1 == 1) {
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPlease, choose from the following options:\n";
			cout << "\t\t\t\t\t\t\t\t\t___________________________________________________________________________________            \n";
			cout << "\t\t\t\t\t\t\t\t       |                                                                                   |\n";
			cout << "\t\t\t\t\t\t\t\t       | 1 << Add Doctor                                                                   |\n";
			cout << "\t\t\t\t\t\t\t\t       | 2 << Add Nurse                                                                    |\n";
			cout << "\t\t\t\t\t\t\t\t       | 3 << Add receptionist                                                             |\n";
			cout << "\t\t\t\t\t\t\t\t       |___________________________________________________________________________________|\n";
			cout << endl;
			cout << "\t\t\t\t\t\t\t\t         Select one choice: ";
			cin >> option;
			if (option == 1) {
				system("cls");
				Doctor D1;
				addStaff(D1);
				fstream myFile;
				writeFile(D1, "Doctors.txt", myFile);


			}

		}


	}
}


