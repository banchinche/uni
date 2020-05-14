#include "stuff.hpp"
#include "teacher.hpp"
#include "student.hpp"
#include <windows.h>
class WrongChoice : std::exception {}; // класс исключений, срабатывающий, когда выбирают неверный пункт в меню
uint64 menuStudent(); // меню студента
uint64 menuTeacher(); // меню преподавателя
uint64 menuSpeciality(); // меню специальности
uint64 menuGroup(); // меню группы
uint64 menuSubject(); // меню предмета
uint64 menuAudience(); // меню аудиторий
int main() {
	uint64 choice = 0;
	bool marker = 1;
	uint64 quantity = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
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
			system("cls");
			Teachers teachers(quantity);
			bool is_inisialised = false;
			while (marker2) {
				switch (menuTeacher()) {
				case 1:
					std::cin.ignore();
					teachers.setTeachers();
					is_inisialised = true;
					system("cls");
					break;
				case 2:
					teachers.setTeachers("inputTeachers.txt");
					is_inisialised = true;
					system("cls");
					break;
				case 3:
					system("cls");
					teachers.showTeachers();
					break;
				case 4:
					teachers.outTeachers("outputTeachers.txt");
					system("cls");
					break;
				case 5:
					teachers.sortTeachersSpecialities();
					system("cls");
					break;
				case 0:
					system("cls");
					if (is_inisialised)
						marker2 = 0;
					else {
						std::cout << "You must initialize the database before exiting the menu" << std::endl;
						marker2 = 1;
					}
				default:
					break;
				}
			}
			marker2 = 1;
			break;
		}
		case 2:
		{
			std::cout << "Enter a quantity of students" << std::endl;
			std::cin >> quantity;
			system("cls");
			Students students(quantity);
			bool is_inisialised = false;
			while (marker2) {
				switch (menuStudent()) {
				case 1:
					std::cin.ignore();
					students.setStudents();
					is_inisialised = true;
					system("cls");
					break;
				case 2:
					students.setStudents("inputStudents.txt");
					is_inisialised = true;
					system("cls");
					break;
				case 3:
					system("cls");
					students.showStudents();
					break;
				case 4:
					students.outStudents("outputStudents.txt");
					system("cls");
					break;
				case 5:
					students.sortStudentsSubjects();
					system("cls");
					break;
				case 0:
					system("cls");
					if (is_inisialised)
						marker2 = 0;
					else {
						std::cout << "You must initialize the database before exiting the menu" << std::endl;
						marker2 = 1;
					}
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
			system("cls");
			while (marker2) {
				switch (menuSpeciality()) {
				case 1:
					specialities.setSpecialities();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("inputSpecialities.txt");
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
					fout.open("outputSpecialities.txt");
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
					system("cls");
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
			system("cls");
			while (marker2) {
				switch (menuGroup()) {
				case 1:
					groups.setGroups();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("inputGroups.txt");
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
					fout.open("outputGroups.txt");
					groups.outGroups(fout);
					system("cls");
					break;
				}
				case 0:
					marker2 = 0;
					system("cls");
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
			system("cls");
			while (marker2) {
				switch (menuSubject()) {
				case 1:
					subjects.setSubjects();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("inputSubjects.txt");
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
					fout.open("outputSubjects.txt");
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
					system("cls");
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
			system("cls");
			while (marker2) {
				switch (menuAudience()) {
				case 1:
					audiences.setAudiences();
					system("cls");
					break;
				case 2:
				{
					std::ifstream fin;
					fin.open("inputAudiences.txt");
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
					fout.open("outputAudiences.txt");
					audiences.outAudiences(fout);
					system("cls");
					break;
				}
				case 0:
					marker2 = 0;
					system("cls");
					break;
				default:
					break;
				}
			}
			marker2 = 1;
			break;
		}
		case 0:
			return 0; 
		default:
			system("cls");
			std::cout << "Reenter your choice." << std::endl;
			break;
			}
		}
		return 0;
}

uint64 menuStudent() 
{
	uint64 choice = 0;
	std::cout << "Student base" << std::endl;
	std::cout << "1 - Read data from console. \n";
	std::cout << "2 - Read data from file.\n";
	std::cout << "3 - Show data to console.\n";
	std::cout << "4 - Write data to file.\n";
	std::cout << "5 - Sort student's subjects.\n";
	std::cout << "0 - Return to previous menu(if you initialized the database in any way). \n";
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
	std::cout << "Teacher base" << std::endl;
	std::cout << "1 - Read data from console. \n";
	std::cout << "2 - Read data from file.\n";
	std::cout << "3 - Show data to console.\n";
	std::cout << "4 - Write data to file.\n";
	std::cout << "5 - Sort specialities taught by the teacher.\n";
	std::cout << "0 - Return to previous menu(if you initialized the database in any way). \n";
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
		std::cout << "Speciality base" << std::endl;
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
		std::cout << "Group base" << std::endl;
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
		std::cout << "Subject base" << std::endl;
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
		std::cout << "Audience base" << std::endl;
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