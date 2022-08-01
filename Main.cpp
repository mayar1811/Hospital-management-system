#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include"Doctor.h"
#include"Nurse.h"
#include"Receptionist.h"
using namespace std;
Doctor addDoctor(Doctor&d,string S,fstream&f){
	int age, Rank;
	string FirstName, LastName, Gender, Address, Department, Specialization, mobNumber, ID;
	cout << "Enter the ID: ";
	cin >> ID;
	ID = "000" + ID;
	d.setId(ID);
	cout << "Enter the first name: ";
	cin >> FirstName;
	d.setFName(FirstName);
	cout << "Enter the last name: ";
	cin >> LastName;
	d.setLName(LastName);
	cout << "Enter the gender: ";
	cin >> Gender;
	d.setGender(Gender);
	cout << "Enter the age: ";
	cin >> age;
	d.setAge(age);
	cout << "Enter the phone number: ";
	cin >> mobNumber;
	d.setMobNum(mobNumber);
	cout << "Enter the address: ";
	cin >> Address;
	d.setAddress(Address);
	cout << "Enter the department:";
	cin >> Department;
	d.setDepartment(Department);
	cout << "Enter the specialization:";
	cin >> Specialization;
	d.setSpecialization(Specialization);
	cout << "Enter the rank:";
	cin >> Rank;
	d.setRank(Rank);
	system("cls");
	f.open(S, ios::app);
	if (f.is_open()) {
		f << "ID : " << d.getId() << "\n" << "First Name : " << d.getFName()
			<< "\n" << "Last Name : " << d.getLName() << "\n" << "Gender : " << d.getGender()
			<< "\n" << "Age : " << d.getAge() << "\n" << "Phone Number : " << d.getMobNum() << "\n"
			<< "Address : " << d.getAddress() << "\n" << "Department : " << d.getDepartment()
			<< "\n" << "Specialization : " << d.getSpecialization()
			<< "\n" << "Rank : " << d.getRank() << "\n" << std::endl;
		f.close();

	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
	system("pause");
	system("cls");	
	return d;
}
Nurse addNurse(Nurse& n, string S, fstream& f) {
	int age;
	string FirstName, LastName, Gender, Address, Department, Specialization, mobNumber, ID;
	cout << "Enter the ID: ";
	cin >> ID;
	ID = "111" + ID;
	n.setId(ID);
	cout << "Enter the first name: ";
	cin >> FirstName;
	n.setFName(FirstName);
	cout << "Enter the last name: ";
	cin >> LastName;
	n.setLName(LastName);
	cout << "Enter the gender: ";
	cin >> Gender;
	n.setGender(Gender);
	cout << "Enter the age: ";
	cin >> age;
	n.setAge(age);
	cout << "Enter the phone number: ";
	cin >> mobNumber;
	n.setMobNum(mobNumber);
	cout << "Enter the address: ";
	cin >> Address;
	n.setAddress(Address);
	cout << "Enter the department:";
	cin >> Department;
	n.setDepartment(Department);
	cout << "Enter the specialization:";
	cin >> Specialization;
	n.setSpecialization(Specialization);
	system("cls");
	f.open(S, ios::app);
	if (f.is_open()) {
		f << "ID : " << n.getId() << "\n" << "First Name : " << n.getFName()
			<< "\n" << "Last Name : " << n.getLName() << "\n" << "Gender : " << n.getGender()
			<< "\n" << "Age : " << n.getAge() << "\n" << "Phone Number : " << n.getMobNum() << "\n"
			<< "Address : " << n.getAddress() << "\n" << "Department : " << n.getDepartment()
			<< "\n" << "Specialization : " << n.getSpecialization() << "\n" << std::endl;
		f.close();

	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
	system("pause");
	system("cls");
	return n;
	
}
Receptionist addReceptionist(Receptionist& r, string S, fstream& f) {
	int age;
	string FirstName, LastName, Gender, Address, mobNumber, ID;
	cout << "Enter the ID: ";
	cin >> ID;
	ID = "222" + ID;
	r.setId(ID);
	cout << "Enter the first name: ";
	cin >> FirstName;
	r.setFName(FirstName);
	cout << "Enter the last name: ";
	cin >> LastName;
	r.setLName(LastName);
	cout << "Enter the gender: ";
	cin >> Gender;
	r.setGender(Gender);
	cout << "Enter the age: ";
	cin >> age;
	r.setAge(age);
	cout << "Enter the phone number: ";
	cin >> mobNumber;
	r.setMobNum(mobNumber);
	cout << "Enter the address: ";
	cin >> Address;
	r.setAddress(Address);
	system("cls");
	f.open(S, ios::app);
	if (f.is_open()) {
		f << "ID : " << r.getId() << "\n" << "First Name : " << r.getFName()
			<< "\n" << "Last Name : " << r.getLName() << "\n" << "Gender : " << r.getGender()
			<< "\n" << "Age : " << r.getAge() << "\n" << "Phone Number : " << r.getMobNum() << "\n"
			<< "Address : " << r.getAddress() << "\n" << std::endl;
		f.close();
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
	system("pause");
	system("cls");
	return r;
}

int main() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM" << endl;
	system("pause");
	system("cls");

	int choice, Attempts = 1;
	string Username, Password;
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
		while (Password.length() != 13 && Attempts < 2) {
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
		if (Password.length() != 13 && Attempts >= 2) {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tYOU CANNOT ACCESS \n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM" << endl;
			system("pause");
			return 0;
		}
		system("cls");
		int function, option;
		do {
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
			cout << "\t\t\t\t\t\t\t\t       | 0  << exist                                                                           |\n";
			cout << "\t\t\t\t\t\t\t\t       |_______________________________________________________________________________________|\n";
			cout << endl;
			cout << "\t\t\t\t\t\t\t\t         Select one choice: ";
			cin >> function;
			if (function == 1) {
				do {
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
				} while (option != 1 && option != 2 && option != 3);
				if (option == 1) {
					system("cls");
					Doctor D;
					fstream myFile;
					addDoctor(D, "Doctors.txt", myFile);
				}
				else if (option == 2) {
					system("cls");
					Nurse N;
					fstream myFile;
					addNurse(N, "Nurses.txt", myFile);

				}
				else if (option == 3) {
					system("cls");
					Receptionist R;
					fstream myFile;
					addReceptionist(R, "Receptionists.txt", myFile);
				}
			}
			else if (function == 2) {
				do {
					system("cls");
					cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPlease, choose from the following options:\n";
					cout << "\t\t\t\t\t\t\t\t\t___________________________________________________________________________________            \n";
					cout << "\t\t\t\t\t\t\t\t       |                                                                                   |\n";
					cout << "\t\t\t\t\t\t\t\t       | 1 << Delete Doctor                                                                   |\n";
					cout << "\t\t\t\t\t\t\t\t       | 2 << Delete Nurse                                                                    |\n";
					cout << "\t\t\t\t\t\t\t\t       | 3 << Delete receptionist                                                             |\n";
					cout << "\t\t\t\t\t\t\t\t       |___________________________________________________________________________________|\n";
					cout << endl;
					cout << "\t\t\t\t\t\t\t\t         Select one choice: ";
					cin >> option;
				} while (option != 1 && option != 2 && option != 3);
				if (option == 1) {
					system("cls");
					ifstream File1;
					File1.open("Doctors.txt");
					ofstream File2;
					File2.open("new.txt");


				}
			}
			} while (function != 0);
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM \n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t\t\tIS CLOSED" << endl;


		}
	}

