#include "Admin.h"

Admin::Admin() {
	username = 'NULL';
	password = 'NULL';
}
Admin::Admin(string Username,string Password) {
	username = Username;
	password = Password;
}

void Admin::addDoctor(Doctor&d,string S,fstream&f) {
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
		f << "ID : " << d.getId() << "\n" << "First Name:" << d.getFName()
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
}

void Admin::addNurse(Nurse& n, string S, fstream& f) {
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

}

void Admin::addReceptionist(Receptionist& r, string S, fstream& f) {
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
}

void Admin::deleteDoctor() {
	string ID;
	cout << "enter the ID you want to remove: ";
	cin >> ID;
	ifstream File1;
	File1.open("Doctors.txt", ios::in);
	ofstream File2;
	File2.open("new.txt", ios::out);
	string Line;
	bool flag = false;
	while (1) {
		getline(File1, Line);
		if (Line == "")
			break;
		Line.erase(Line.find("ID : "), strlen("ID : "));
		if (Line != ID) {
			flag = false;
			File2 << "ID:" << Line << '\n';
			for (int i = 0; i < 10; i++) {
				getline(File1, Line);
				File2 << Line << endl;
			}
		}
		else {
			flag =true;
			for (int i = 0; i < 10; i++) {
				getline(File1, Line);
			}
		}
	}

	File1.close();
	File2.close();
	remove("Doctors.txt");
	int var=rename("new.txt", "Doctors.txt");
	if (var == 0) {
		cout << "name changed" << endl;
	}
	else {
		cout << "name not changed" << endl;
	}
	if (flag == true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tID NOT FOUND\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
}

void Admin::deleteNurse() {
	string ID;
	cout << "enter the ID you want to remove: ";
	cin >> ID;
	ifstream File1;
	File1.open("Nurses.txt", ios::in);
	ofstream File2;
	File2.open("New.txt", ios::out);
	string Line;
	bool flag = false;
	while (1) {
		getline(File1, Line);
		if (Line == "")
			break;
		Line.erase(Line.find("ID : "), strlen("ID : "));
		if (Line != ID) {
			flag = false;
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 9; i++) {
				getline(File1, Line);
				File2 << Line << endl;
			}
		}
		else {
			flag = true;
			for (int i = 0; i < 9; i++) {
				getline(File1, Line);
			}
		}
	}
	File1.close();
	File2.close();
	remove("Nurses.txt");
	int var = rename("New.txt", "Nurses.txt");
	if (var == 0) {
		cout << "name changed" << endl;
	}
	else {
		cout << "name not changed" << endl;
	}
	if (flag == true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tID NOT FOUND\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}

}

void Admin::deleteReceptionist() {
	string ID;
	cout << "enter the ID you want to remove: ";
	cin >> ID;
	ifstream File1;
	File1.open("Receptionists.txt", ios::in);
	ofstream File2;
	File2.open("new.txt", ios::out);
	string Line;
	bool flag = false;
	while (1) {
		getline(File1, Line);
		if (Line == "")
			break;
		Line.erase(Line.find("ID : "), strlen("ID : "));
		if (Line != ID) {
			flag = false;
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 7; i++) {
				getline(File1, Line);
				File2 << Line << endl;
			}
		}
		else {
			flag = true;
			for (int i = 0; i < 7; i++) {
				getline(File1, Line);
			}
		}
	}
	File1.close();
	File2.close();
	remove("Receptionists.txt");
	int var = rename("new.txt", "Receptionists.txt");
	if (var == 0) {
		cout << "name changed" << endl;
	}
	else {
		cout << "name not changed" << endl;
	}

	if (flag == true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tID NOT FOUND\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}

}

void Admin::updateDoctor() {
	int option;
	string id;
	cout << "please, Enter the ID of the Doctor you want to change: ";
	cin >> id;
	do {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPlease, choose the item you want to update from the following options:\n";
		cout << "\t\t\t\t\t\t\t\t\t___________________________________________________________________________________            \n";
		cout << "\t\t\t\t\t\t\t\t       |                                                                                   |\n";
		cout << "\t\t\t\t\t\t\t\t       | 1 << Update ID                                                                    |\n";
		cout << "\t\t\t\t\t\t\t\t       | 2 << Update Phone Number                                                          |\n";
		cout << "\t\t\t\t\t\t\t\t       | 3 << Update Address                                                               |\n";
		cout << "\t\t\t\t\t\t\t\t       | 4 << Update Department                                                            |\n";
		cout << "\t\t\t\t\t\t\t\t       | 5 << Update Specialization                                                        |\n";
		cout << "\t\t\t\t\t\t\t\t       | 6 << Update Rank                                                                  |\n";
		cout << "\t\t\t\t\t\t\t\t       | 0 << Exist                                                                        |\n";
		cout << "\t\t\t\t\t\t\t\t       |___________________________________________________________________________________|\n";
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t         Select one item: ";
		cin >> option;
		
	
	if (option == 1) {
		ifstream File1;
		File1.open("Doctors.txt", ios::in);
		ofstream File2;
		File2.open("new.txt", ios::out);
		string Line;
		bool flag = false;
		string item;
		cout << "enter the updated ID: " << endl;
		cin >> item;
		while (1) {
			getline(File1, Line);
			if (Line == "")
				break;
			Line.erase(Line.find("ID : "), strlen("ID : "));
			if (Line != id) {
				File2 << "ID : " << Line << '\n';
				for (int i = 0; i < 10; i++) {
					getline(File1, Line);
					File2 << Line << endl;
				}
			}
			else {
				flag = true;
				File2 << "ID : " << item << '\n';
				for (int i = 0; i < 10; i++) {
					getline(File1, Line);
					File2 << Line << endl;

				}
			}

		}
		File1.close();
		File2.close();
		remove("Doctors.txt");
		int var = rename("new.txt", "Doctors.txt");
		if (flag == true) {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
			system("pause");
			system("cls");
		}
		else {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
			system("pause");
			system("cls");
		}
	}
	else if (option == 2) {
		ifstream File1;
		File1.open("Doctors.txt", ios::in);
		ofstream File2;
		File2.open("new.txt", ios::out);
		string Line;
		bool flag = false;
		string item;
		cout << "enter the updated Phone Number: " << endl;
		cin >> item;
		while (1) {
			getline(File1, Line);
			if (Line == "")
				break;
			Line.erase(Line.find("ID : "), strlen("ID : "));
			if (Line != id) {
				File2 << "ID : " << Line << '\n';
				for (int i = 0; i < 10; i++) {
					getline(File1, Line);
					File2 << Line << endl;
				}
			}
			else {
				flag = true;
				File2 << "ID : " << Line << '\n';
				for (int i = 0; i < 10; i++) {
					if (i == 4) {
						getline(File1, Line);
						File2 <<"Phone Number : "<< item << endl;
					}
					else {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
			}
		}
		File1.close();
		File2.close();
		remove("Doctors.txt");
		int var = rename("new.txt", "Doctors.txt");
		if (flag == true) {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
			system("pause");
			system("cls");
		}
		else {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
			system("pause");
			system("cls");
		}

	}
	else if (option == 3) {
	ifstream File1;
	File1.open("Doctors.txt", ios::in);
	ofstream File2;
	File2.open("new.txt", ios::out);
	string Line;
	bool flag = false;
	string item;
	cout << "enter the updated Address: " << endl;
	cin >> item;
	while (1) {
		getline(File1, Line);
		if (Line == "")
			break;
		Line.erase(Line.find("ID : "), strlen("ID : "));
		if (Line != id) {
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				getline(File1, Line);
				File2 << Line << endl;
			}
		}
		else {
			flag = true;
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				if (i == 5) {
					getline(File1, Line);
					File2 << "Address : " << item << endl;
				}
				else {
					getline(File1, Line);
					File2 << Line << endl;
				}
			}
		}
	}
	File1.close();
	File2.close();
	remove("Doctors.txt");
	int var=rename("new.txt", "Doctors.txt");
	if (flag == true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
    }
	else if (option == 4) {
	ifstream File1;
	File1.open("Doctors.txt", ios::in);
	ofstream File2;
	File2.open("new.txt", ios::out);
	string Line;
	bool flag = false;
	string item;
	cout << "enter the updated Department: " << endl;
	cin >> item;
	while (1) {
		getline(File1, Line);
		if (Line == "")
			break;
		Line.erase(Line.find("ID : "), strlen("ID : "));
		if (Line != id) {
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				getline(File1, Line);
				File2 << Line << endl;
			}
		}
		else {
			flag = true;
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				if (i == 6) {
					getline(File1, Line);
					File2 << "Department : " << item << endl;
				}
				else {
					getline(File1, Line);
					File2 << Line << endl;
				}
			}
		}
	}
	File1.close();
	File2.close();
	remove("Doctors.txt");
	int var = rename("new.txt", "Doctors.txt");
	if (flag == true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
    }
	else if (option == 5) {
	ifstream File1;
	File1.open("Doctors.txt", ios::in);
	ofstream File2;
	File2.open("new.txt", ios::out);
	string Line;
	bool flag = false;
	string item;
	cout << "enter the updated specialization: " << endl;
	cin >> item;
	while (1) {
		getline(File1, Line);
		if (Line == "")
			break;
		Line.erase(Line.find("ID : "), strlen("ID : "));
		if (Line != id) {
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				getline(File1, Line);
				File2 << Line << endl;
			}
		}
		else {
			flag = true;
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				if (i == 7) {
					getline(File1, Line);
					File2 << "Specialization : " << item << endl;
				}
				else {
					getline(File1, Line);
					File2 << Line << endl;
				}
			}
		}
	}
	File1.close();
	File2.close();
	remove("Doctors.txt");
	int var = rename("new.txt", "Doctors.txt");
	if (flag == true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
    }
	else if (option == 6) {
	ifstream File1;
	File1.open("Doctors.txt", ios::in);
	ofstream File2;
	File2.open("new.txt", ios::out);
	string Line;
	bool flag = false;
	int item;
	cout << "enter the updated Rank: " << endl;
	cin >> item;
	while (1) {
		getline(File1, Line);
		if (Line == "")
			break;
		Line.erase(Line.find("ID : "), strlen("ID : "));
		if (Line != id) {
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				getline(File1, Line);
				File2 << Line << endl;
			}
		}
		else {
			flag = true;
			File2 << "ID : " << Line << '\n';
			for (int i = 0; i < 10; i++) {
				if (i == 8) {
					getline(File1, Line);
					File2 << "Rank : " << item << endl;
				}
				else {
					getline(File1, Line);
					File2 << Line << endl;
				}
			}
		}
	}
	File1.close();
	File2.close();
	remove("Doctors.txt");
	int var = rename("new.txt", "Doctors.txt");
	if (flag == true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
		system("pause");
		system("cls");
	}
    }
	} while (option != 0);
	system("cls");
}

void Admin::updateNurse()
{
	int option;
	string id;
	cout << "please, Enter the ID of the Nurse you want to change: ";
	cin >> id;
	do {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPlease, choose the item you want to update from the following options:\n";
		cout << "\t\t\t\t\t\t\t\t\t___________________________________________________________________________________            \n";
		cout << "\t\t\t\t\t\t\t\t       |                                                                                   |\n";
		cout << "\t\t\t\t\t\t\t\t       | 1 << Update ID                                                                    |\n";
		cout << "\t\t\t\t\t\t\t\t       | 2 << Update Phone Number                                                          |\n";
		cout << "\t\t\t\t\t\t\t\t       | 3 << Update Address                                                               |\n";
		cout << "\t\t\t\t\t\t\t\t       | 4 << Update Department                                                            |\n";
		cout << "\t\t\t\t\t\t\t\t       | 5 << Update Specialization                                                        |\n";
		cout << "\t\t\t\t\t\t\t\t       | 0 << Exist                                                                        |\n";
		cout << "\t\t\t\t\t\t\t\t       |___________________________________________________________________________________|\n";
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t         Select one item: ";
		cin >> option;
		if (option == 1) {
			ifstream File1;
			File1.open("Nurses.txt", ios::in);
			ofstream File2;
			File2.open("New.txt", ios::out);
			string Line;
			bool flag = false;
			string item;
			cout << "enter the updated ID: " << endl;
			cin >> item;
			while (1) {
				getline(File1, Line);
				if (Line == "")
					break;
				Line.erase(Line.find("ID : "), strlen("ID : "));
				if (Line != id) {
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 9; i++) {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
				else {
					flag = true;
					File2 << "ID : " << item << '\n';
					for (int i = 0; i < 9; i++) {
						getline(File1, Line);
						File2 << Line << endl;

					}
				}

			}
			File1.close();
			File2.close();
			remove("Nurses.txt");
			int var = rename("New.txt", "Nurses.txt");
			if (flag == true) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
		}
		else if (option == 2) {
			ifstream File1;
			File1.open("Nurses.txt", ios::in);
			ofstream File2;
			File2.open("New.txt", ios::out);
			string Line;
			bool flag = false;
			string item;
			cout << "enter the updated Phone Number: " << endl;
			cin >> item;
			while (1) {
				getline(File1, Line);
				if (Line == "")
					break;
				Line.erase(Line.find("ID : "), strlen("ID : "));
				if (Line != id) {
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 9; i++) {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
				else {
					flag = true;
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 9; i++) {
						if (i == 4) {
							getline(File1, Line);
							File2 << "Phone Number : " << item << endl;
						}
						else {
							getline(File1, Line);
							File2 << Line << endl;
						}
					}
				}
			}
			File1.close();
			File2.close();
			remove("Nurses.txt");
			int var = rename("New.txt", "Nurses.txt");
			if (flag == true) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
		}
		else if (option == 3) {
			ifstream File1;
			File1.open("Nurses.txt", ios::in);
			ofstream File2;
			File2.open("New.txt", ios::out);
			string Line;
			bool flag = false;
			string item;
			cout << "enter the updated Address: " << endl;
			cin >> item;
			while (1) {
				getline(File1, Line);
				if (Line == "")
					break;
				Line.erase(Line.find("ID : "), strlen("ID : "));
				if (Line != id) {
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 9; i++) {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
				else {
					flag = true;
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 9; i++) {
						if (i == 5) {
							getline(File1, Line);
							File2 << "Address : " << item << endl;
						}
						else {
							getline(File1, Line);
							File2 << Line << endl;
						}
					}
				}
			}
			File1.close();
			File2.close();
			remove("Nurses.txt");
			int var = rename("New.txt", "Nurses.txt");
			if (flag == true) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
		}
		else if (option == 4) {
		ifstream File1;
		File1.open("Nurses.txt", ios::in);
		ofstream File2;
		File2.open("New.txt", ios::out);
		string Line;
		bool flag = false;
		string item;
		cout << "enter the updated Department: " << endl;
		cin >> item;
		while (1) {
			getline(File1, Line);
			if (Line == "")
				break;
			Line.erase(Line.find("ID : "), strlen("ID : "));
			if (Line != id) {
				File2 << "ID : " << Line << '\n';
				for (int i = 0; i < 9; i++) {
					getline(File1, Line);
					File2 << Line << endl;
				}
			}
			else {
				flag = true;
				File2 << "ID : " << Line << '\n';
				for (int i = 0; i < 9; i++) {
					if (i == 6) {
						getline(File1, Line);
						File2 << "Department : " << item << endl;
					}
					else {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
			}
		}
		File1.close();
		File2.close();
		remove("Nurses.txt");
		int var = rename("New.txt", "Nurses.txt");
		if (flag == true) {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
			system("pause");
			system("cls");
		}
		else {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
			system("pause");
			system("cls");
		}
	    }
		else if (option == 5) {
			ifstream File1;
			File1.open("Nurses.txt", ios::in);
			ofstream File2;
			File2.open("New.txt", ios::out);
			string Line;
			bool flag = false;
			string item;
			cout << "enter the updated specialization: " << endl;
			cin >> item;
			while (1) {
				getline(File1, Line);
				if (Line == "")
					break;
				Line.erase(Line.find("ID : "), strlen("ID : "));
				if (Line != id) {
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 9; i++) {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
				else {
					flag = true;
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 9; i++) {
						if (i == 7) {
							getline(File1, Line);
							File2 << "Specialization : " << item << endl;
						}
						else {
							getline(File1, Line);
							File2 << Line << endl;
						}
					}
				}
			}
			File1.close();
			File2.close();
			remove("Nurses.txt");
			int var = rename("New.txt", "Nurses.txt");
			if (flag == true) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
		}
	} while (option != 0);
	system("cls");
}

void Admin::updateReceptionist()
{
	int option;
	string id;
	cout << "please, Enter the ID of the Recetionist you want to change: ";
	cin >> id;
	do {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPlease, choose the item you want to update from the following options:\n";
		cout << "\t\t\t\t\t\t\t\t\t___________________________________________________________________________________            \n";
		cout << "\t\t\t\t\t\t\t\t       |                                                                                   |\n";
		cout << "\t\t\t\t\t\t\t\t       | 1 << Update ID                                                                    |\n";
		cout << "\t\t\t\t\t\t\t\t       | 2 << Update Phone Number                                                          |\n";
		cout << "\t\t\t\t\t\t\t\t       | 3 << Update Address                                                               |\n";
		cout << "\t\t\t\t\t\t\t\t       | 0 << Exist                                                                        |\n";
		cout << "\t\t\t\t\t\t\t\t       |___________________________________________________________________________________|\n";
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t         Select one item: ";
		cin >> option;
		if (option == 1) {
			ifstream File1;
			File1.open("Receptionists.txt", ios::in);
			ofstream File2;
			File2.open("new.txt", ios::out);
			string Line;
			bool flag = false;
			string item;
			cout << "enter the updated ID: " << endl;
			cin >> item;
			while (1) {
				getline(File1, Line);
				if (Line == "")
					break;
				Line.erase(Line.find("ID : "), strlen("ID : "));
				if (Line != id) {
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 7; i++) {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
				else {
					flag = true;
					File2 << "ID : " << item << '\n';
					for (int i = 0; i < 7; i++) {
						getline(File1, Line);
						File2 << Line << endl;

					}
				}

			}
			File1.close();
			File2.close();
			remove("Receptionists.txt");
			int var = rename("new.txt", "Receptionists.txt");
			if (flag == true) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
		}
		else if (option == 2) {
			ifstream File1;
			File1.open("Receptionists.txt", ios::in);
			ofstream File2;
			File2.open("new.txt", ios::out);
			string Line;
			bool flag = false;
			string item;
			cout << "enter the updated Phone Number: " << endl;
			cin >> item;
			while (1) {
				getline(File1, Line);
				if (Line == "")
					break;
				Line.erase(Line.find("ID : "), strlen("ID : "));
				if (Line != id) {
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 7; i++) {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
				else {
					flag = true;
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 7; i++) {
						if (i == 4) {
							getline(File1, Line);
							File2 << "Phone Number : " << item << endl;
						}
						else {
							getline(File1, Line);
							File2 << Line << endl;
						}
					}
				}
			}
			File1.close();
			File2.close();
			remove("Receptionists.txt");
			int var = rename("new.txt", "Receptionists.txt");
			if (flag == true) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
		}
		else if (option == 3) {
			ifstream File1;
			File1.open("Receptionists.txt", ios::in);
			ofstream File2;
			File2.open("new.txt", ios::out);
			string Line;
			bool flag = false;
			string item;
			cout << "enter the updated Address: " << endl;
			cin >> item;
			while (1) {
				getline(File1, Line);
				if (Line == "")
					break;
				Line.erase(Line.find("ID : "), strlen("ID : "));
				if (Line != id) {
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 7; i++) {
						getline(File1, Line);
						File2 << Line << endl;
					}
				}
				else {
					flag = true;
					File2 << "ID : " << Line << '\n';
					for (int i = 0; i < 7; i++) {
						if (i == 5) {
							getline(File1, Line);
							File2 << "Address : " << item << endl;
						}
						else {
							getline(File1, Line);
							File2 << Line << endl;
						}
					}
				}
			}
			File1.close();
			File2.close();
			remove("Receptionists.txt");
			int var = rename("new.txt", "Receptionists.txt");
			if (flag == true) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY,ID NOT FOUND\n\n\n\n " << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tUNSUCCESSFUL TRANSACTION\n\n\n\n " << endl;
				system("pause");
				system("cls");
			}
		}
	} while (option != 0);
	system("cls");
}

void Admin::searchForStaffByID()
{
}

