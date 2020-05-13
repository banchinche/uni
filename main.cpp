#include "stuff.hpp"
#include "teacher.hpp"
#include "student.hpp"
class WrongChoice : std::exception {};
uint64 menuStudent();
uint64 menuTeacher();
uint64 menuSpeciality();
uint64 menuGroup();
uint64 menuSubject();
uint64 menuAudience();
int main(int argc, const char * argv[]) {
	uint64 choice = 0;
	bool marker = 1;
	uint64 quantity = 0;
	while (marker) {
		std::cout << "1 - Create a teacher base.\n";
		std::cout << "2 - Create a student base.\n";
		std::cout << "3 - Create a speciality base.\n";
		std::cout << "4 - Create a group base.\n";
		std::cout << "5 - Create a subject base.\n";
		std::cout << "6 - Create a auditory base.\n";
		std::cout << "0 - To exit.\n";
		std::cin >> choice;
		bool marker2 = 1;
		switch (choice)
		{
		case 1:
		{
			std::cout << "Enter a quantity of teachers" << std::endl;
			std::cin >> quantity;
			std::cin.ignore();
			system("cls");
			Teachers teachers(quantity);
			while (marker2) {
				switch (menuTeacher()) {
				case 1:
					teachers.setTeachers();
					system("cls");
					break;
				case 2:
					teachers.setTeachers("input.txt");
					system("cls");
					break;
				case 3:
					system("cls");
					teachers.showTeachers();
					break;
				case 4:
					teachers.outTeachers("output.txt");
					system("cls");
					break;
				case 5:
					teachers.sortTeachersSpecialities();
					break;
				case 0:
					marker2 = 0;
					break;
				default:
					break;
				}
			}
			marker2 = 1; // не уверен что это нужно
			break;
		}
		case 2:
		{
			std::cout << "Enter a quantity of students" << std::endl;
			std::cin >> quantity;
			std::cin.ignore();
			system("cls");
			Students students(quantity);
			while (marker2) {
				switch (menuStudent()) {
				case 1:
					students.setStudents();
					system("cls");
					break;
				case 2:
					students.setStudents("input.txt");
					system("cls");
					break;
				case 3:
					system("cls");
					students.showStudents();
					break;
				case 4:
					students.outStudents("output.txt");
					system("cls");
					break;
				case 5:
					students.sortStudentsSubjects();
					break;
				case 0:
					marker2 = 0;
					break;
				default:
					break;
				}
			}
			marker2 = 1;
			break;
		}
		case 3:
		{
			Specialities specialities;
			while (marker2) {
				switch (menuSpeciality()) {
				case 1:
					specialities.setSpecialities();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("input.txt");
					specialities.setSpecialities(fin);
					fin.close();
					system("cls");
					break;
				}
				case 3:
					system("cls");
					specialities.showSpecialities();
					break;
				case 4:
				{
					std::ofstream fout;
					fout.open("output.txt");
					specialities.outSpecialities(fout);
					system("cls");
					break;
				}
				case 5:
					specialities.sortSpecialities();
					system("cls");
					break;
				case 0:
					marker2 = 0;
					break;
				default:
					break;
				}
			}
			marker2 = 1;
			break;
		}
		case 4:
		{
			Groups groups;
			while (marker2) {
				switch (menuGroup()) {
				case 1:
					groups.setGroups();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("input.txt");
					groups.setGroups(fin);
					fin.close();
					system("cls");
					break;
				}
				case 3:
					system("cls");
					groups.showGroups();
					break;
				case 4:
				{
					std::ofstream fout;
					fout.open("output.txt");
					groups.outGroups(fout);
					system("cls");
					break;
				}
				case 0:
					marker2 = 0;
					break;
				default:
					break;
				}
			}
			marker2 = 1;
			break;
		}
		case 5:
		{
			Subjects subjects;
			while (marker2) {
				switch (menuSubject()) {
				case 1:
					subjects.setSubjects();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("input.txt");
					subjects.setSubjects(fin);
					fin.close();
					system("cls");
					break;
				}
				case 3:
					system("cls");
					subjects.showSubjects();
					break;
				case 4:
				{
					std::ofstream fout;
					fout.open("output.txt");
					subjects.outSubjects(fout);
					system("cls");
					break;
				}
				case 5:
					subjects.sortSubjects();
					system("cls");
					break;
				case 0:
					marker2 = 0;
					break;
				default:
					break;
				}
			}
			marker2 = 1;
			break;
		}
		case 6:
		{
			Audiences audiences;
			while (marker2) {
				switch (menuAudience()) {
				case 1:
					audiences.setAudiences();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("input.txt");
					audiences.setAudiences(fin);
					fin.close();
					system("cls");
					break;
				}
				case 3:
					system("cls");
					audiences.showAudiences();
					break;
				case 4:
				{
					std::ofstream fout;
					fout.open("output.txt");
					audiences.outAudiences(fout);
					system("cls");
					break;
				}
				case 0:
					marker2 = 0;
					break;
				default:
					break;
				}
			}
			marker2 = 1;
			break;
		}
		case 0:
			return 0; // ne uveren
		default:
			break;
			}
		}
		return 0;
}

uint64 menuStudent() 
{
	uint64 choice = 0;
	std::cout << "1 - Read data from console. \n";
	std::cout << "2 - Read data from file.\n";
	std::cout << "3 - Show data to console.\n";
	std::cout << "4 - Write data to file.\n";
	std::cout << "5 - Sort subjects to alphabet.\n";
	std::cout << "0 - Return to previous menu. \n";
	bool marker = 1;
	while (marker) {
		try {
			std::cin >> choice;
			if (choice < 0 || choice > 5)throw WrongChoice();
			else { marker = 0; return choice; }
		}
		catch (WrongChoice) {
			std::cerr << "Reenter your choice: ";
		}
	}
	return choice;
}

uint64 menuTeacher() {
	uint64 choice = 0;
	std::cout << "1 - Read data from console. \n";
	std::cout << "2 - Read data from file.\n";
	std::cout << "3 - Show data to console.\n";
	std::cout << "4 - Write data to file.\n";
	std::cout << "5 - Sort specialities to alphabet.\n";
	std::cout << "0 - Return to previous menu. \n";
	bool marker = 1;
	while (marker) {
		try {
			std::cin >> choice;
			if (choice < 0 || choice > 5)throw WrongChoice();
			else { marker = 0; return choice; }
		}
		catch (WrongChoice) {
			std::cerr << "Reenter your choice: ";
		}
	}
	return choice;
}
	uint64 menuSpeciality() {
		uint64 choice = 0;
		std::cout << "1 - Read data from console. \n";
		std::cout << "2 - Read data from file.\n";
		std::cout << "3 - Show data to console.\n";
		std::cout << "4 - Write data to file.\n";
		std::cout << "5 - Sort to alphabet.\n";
		std::cout << "0 - Return to previous menu. \n";
		bool marker = 1;
		while (marker) {
			try {
				std::cin >> choice;
				if (choice < 0 || choice > 5)throw WrongChoice();
				else { marker = 0; return choice; }
			}
			catch (WrongChoice) {
				std::cerr << "Reenter your choice: ";
			}
		}
		return choice;
	}
	uint64 menuGroup() {
		uint64 choice = 0;
		std::cout << "1 - Read data from console. \n";
		std::cout << "2 - Read data from file.\n";
		std::cout << "3 - Show data to console.\n";
		std::cout << "4 - Write data to file.\n";
		std::cout << "0 - Return to previous menu. \n";
		bool marker = 1;
		while (marker) {
			try {
				std::cin >> choice;
				if (choice < 0 || choice > 4)throw WrongChoice();
				else { marker = 0; return choice; }
			}
			catch (WrongChoice) {
				std::cerr << "Reenter your choice: ";
			}
		}
		return choice;
	}
	uint64 menuSubject() {
		uint64 choice = 0;
		std::cout << "1 - Read data from console. \n";
		std::cout << "2 - Read data from file.\n";
		std::cout << "3 - Show data to console.\n";
		std::cout << "4 - Write data to file.\n";
		std::cout << "5 - Sort to alphabet.\n";
		std::cout << "0 - Return to previous menu. \n";
		bool marker = 1;
		while (marker) {
			try {
				std::cin >> choice;
				if (choice < 0 || choice > 5)throw WrongChoice();
				else { marker = 0; return choice; }
			}
			catch (WrongChoice) {
				std::cerr << "Reenter your choice: ";
			}
		}
		return choice;
	}
	uint64 menuAudience() {
		uint64 choice = 0;
		std::cout << "1 - Read data from console. \n";
		std::cout << "2 - Read data from file.\n";
		std::cout << "3 - Show data to console.\n";
		std::cout << "4 - Write data to file.\n";
		std::cout << "0 - Return to previous menu. \n";
		bool marker = 1;
		while (marker) {
			try {
				std::cin >> choice;
				if (choice < 0 || choice > 4)throw WrongChoice();
				else { marker = 0; return choice; }
			}
			catch (WrongChoice) {
				std::cerr << "Reenter your choice: ";
			}
		}
		return choice;
	}