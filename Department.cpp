#include "Department.h"
Department::Department() {
	 ID ='NULL';
	 Name = 'NULL';
	 Manager = 'NULL';
}
Department::Department(string id, string name, string manager) {
	ID = id;
	Name = name;
	Manager = manager;
}
