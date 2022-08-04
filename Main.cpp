#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include"Admin.h"
#include"Doctor.h"
#include"Nurse.h"
#include"Receptionist.h"

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
		Admin admin;
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
		while (Password.length() != 5 && Attempts < 2) {
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
		if (Password.length() != 5 && Attempts >= 2) {
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
					admin.addDoctor(D,"Doctors.txt",myFile);
				}
				else if (option == 2) {
					system("cls");
					Nurse N;
					fstream myFile;
					admin.addNurse(N, "Nurses.txt", myFile);

				}
				else if (option == 3) {
					system("cls");
					Receptionist R;
					fstream myFile;
					admin.addReceptionist(R, "Receptionists.txt", myFile);
				}
			}
			else if (function == 2) {
				do {
					system("cls");
					cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPlease, choose from the following options:\n";
					cout << "\t\t\t\t\t\t\t\t\t___________________________________________________________________________________            \n";
					cout << "\t\t\t\t\t\t\t\t       |                                                                                   |\n";
					cout << "\t\t\t\t\t\t\t\t       | 1 << Delete Doctor                                                                |\n";
					cout << "\t\t\t\t\t\t\t\t       | 2 << Delete Nurse                                                                 |\n";
					cout << "\t\t\t\t\t\t\t\t       | 3 << Delete receptionist                                                          |\n";
					cout << "\t\t\t\t\t\t\t\t       |___________________________________________________________________________________|\n";
					cout << endl;
					cout << "\t\t\t\t\t\t\t\t         Select one choice: ";
					cin >> option;
				} while (option != 1 && option != 2 && option != 3);
				if (option == 1) {
					system("cls");
					admin.deleteDoctor();
				}
				else if (option == 2) {
					system("cls");
					admin.deleteNurse();
				}
				else if (option == 3) {
					system("cls");
					admin.deleteReceptionist();
				}
			}
			} while (function != 0);
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM \n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t\t\tIS CLOSED" << endl;


		}
	}

