#include "stuff.hpp"

#pragma region Group
Group::Group()
{
	this->groupName = "defaultGroup";
}

Group::~Group()
{
}

void Group::show()
{
	std::cout << "Group name is" << groupName << std::endl;
}

std::string Group::get()
{
	return groupName;
}

std::ostream & operator<<(std::ostream & out, const Group & group)
{
	return out << "Group's name: " << group.groupName << std::endl;
}

std::istream & operator >> (std::istream & in, Group & group)
{
	std::cout << "Enter group's name" << std::endl;
	in >> group.groupName;
	return in;
}

std::ofstream & operator<<(std::ofstream & fout, const Group & group)
{
	fout << group.groupName << std::endl;
	return fout;
}
std::ifstream & operator >> (std::ifstream & fin, Group & group)
{
	fin >> group.groupName;
	return fin;
}
#pragma endregion
#pragma region Audience
Audience::Audience()
{
	audienceNumber = 001;
}

Audience::~Audience()
{
}

void Audience::show()
{
	std::cout << "Audience number is " << audienceNumber << std::endl;
}

uint64 Audience::get()
{
	return audienceNumber;
}
std::ostream & operator<<(std::ostream & out, const Audience & audience)
{
	return out << "Audience number is: " << audience.audienceNumber << std::endl;
}

std::istream & operator >> (std::istream & in, Audience & audience)
{
	std::cout << "Enter audience number" << std::endl;
	in >> audience.audienceNumber;
	return in;
}

std::ofstream & operator<<(std::ofstream & fout, const Audience & audience)
{
	fout << audience.audienceNumber << std::endl;
	return fout;
}

std::ifstream & operator >> (std::ifstream & fin, Audience & audience)
{
		fin >> audience.audienceNumber;
		return fin;
}

#pragma endregion
#pragma region Subject
Subject::Subject()
{
	this->subjectName = "defaultSubject";
}

Subject::~Subject()
{
}

void Subject::show()
{
	std::cout << "Subject's name is" << subjectName << std::endl;
}
std::string Subject::get()
{
	return subjectName;
}
std::ostream & operator<<(std::ostream & out, const Subject & subject)
{
	return out << "Subject's name: " << subject.subjectName << std::endl;
}
std::istream & operator >> (std::istream & in, Subject & subject)
{
	std::cout << "Enter subject's name" << std::endl;
	in >> subject.subjectName;
	return in;
}

std::ofstream & operator<<(std::ofstream & fout, const Subject & subject)
{
	fout << subject.subjectName << std::endl;
	return fout;
}

std::ifstream & operator >> (std::ifstream & fin, Subject & subject)
{
	fin >> subject.subjectName;
	return fin;
}
#pragma endregion
#pragma region Speciality
Speciality::Speciality()
{
	this->specialityName = "defaultSpeciality";
}

Speciality::~Speciality()
{
}

void Speciality::show()
{
	std::cout << "Specialities name is" << specialityName << std::endl;
}

std::string Speciality::get()
{
	return specialityName;
}
std::ostream & operator<<(std::ostream & out, const Speciality & speciality)
{
	return out << "Specialities name: " << speciality.specialityName << std::endl;
}
std::istream & operator >> (std::istream & in, Speciality & speciality)
{
	std::cout << "Enter specialities name" << std::endl;
	in >> speciality.specialityName;
	return in;
}
std::ofstream & operator<<(std::ofstream & fout, const Speciality & speciality)
{
	fout << speciality.specialityName << std::endl;
	return fout;
}
std::ifstream & operator >> (std::ifstream & fin, Speciality & speciality)
{
	fin >> speciality.specialityName;
	return fin;
}
#pragma endregion
// jopa 
#pragma region Groups
Groups::Groups()
{
}

Groups::Groups(const int size)
{
	this->groupsSize = size;
	groups = new Group[groupsSize];
}

Groups::~Groups()
{
	delete[] groups;
}

void Groups::showGroups()
{
	for (int i = 0; i < groupsSize; i++)
		groups[i].show();
}

Group & Groups::operator[](int number) const
{
	return groups[number];
}

void Groups::sortGroups()
{
	for (int i = 0; i < groupsSize - 1; i++) // функция сортировки по алфавиту(пузырьковый метод)
	{
		for (int j = 0; j < groupsSize - i - 1; j++)
		{
			if (groups[j].get().compare(groups[j + 1].get()) > 0) // compare - сравнивает лексикографически строки
				std::swap(groups[j], groups[j + 1]);
		}
	}

}
int Groups::getGroupsSize()
{
	return groupsSize;
}
void Groups::setGroups()
{
	for (int i = 0; i < groupsSize; i++)
		std::cin >> groups[i];
}
void Groups::setGroups(std::ifstream & fin)
{
	for (int i = 0; i < groupsSize; i++)
		fin >> groups[i];
}
void Groups::outGroups()
{
	for (int i = 0; i < groupsSize; i++)
		std::cout << groups[i];
}
void Groups::outGroups(std::ofstream & fout)
{
	for (int i = 0; i < groupsSize; i++)
		fout << groups[i];
}
#pragma endregion
#pragma region Audiences
Audiences::Audiences()
{
}

Audiences::Audiences(const int size)
{
	this->audiencesSize = size;
	audiences = new Audience[audiencesSize];
}

Audiences::~Audiences()
{
}

void Audiences::showAudiences()
{
	for (int i = 0; i < audiencesSize; i++)
		audiences[i].show();
}

Audience & Audiences::operator[](const int number) const
{
	return audiences[number];
}

int Audiences::getAudiencesSize()
{
	return audiencesSize;
}
void Audiences::setAudiences()
{
	for (int i = 0; i < audiencesSize; i++)
		std::cin >> audiences[i];
}
void Audiences::setAudiences(std::ifstream & fin)
{
	for (int i = 0; i < audiencesSize; i++)
		fin >> audiences[i];
}
void Audiences::outAudiences()
{
	for (int i = 0; i < audiencesSize; i++)
		std::cout << audiences[i];
}
void Audiences::outAudiences(std::ofstream & fout)
{
	for (int i = 0; i < audiencesSize; i++)
		fout << audiences[i];
}
#pragma endregion
#pragma region Subjects

Subjects::Subjects()
{
}

Subjects::Subjects(const int size)
{
	this->subjectsSize = size;
	subjects = new Subject[subjectsSize];
}

Subjects::~Subjects()
{
	delete[] subjects;
}

void Subjects::showSubjects()
{
	for (int i = 0; i < subjectsSize; i++)
		subjects[i].show();
}

Subject & Subjects::operator[](const int number) const
{
	return subjects[number];
}

void Subjects::sortSubjects()
{
	for (int i = 0; i < subjectsSize - 1; i++) // функция сортировки по алфавиту(пузырьковый метод)
	{
		for (int j = 0; j < subjectsSize - i - 1; j++)
		{
			if (subjects[j].get().compare(subjects[j + 1].get()) > 0) // compare - сравнивает лексикографически строки
				std::swap(subjects[j], subjects[j + 1]);
		}
	}
}

int Subjects::getSubjectsSize()
{
	return subjectsSize;
}
void Subjects::setSubjects()
{
	for (int i = 0; i < subjectsSize; i++)
		std::cin >> subjects[i];
}
void Subjects::setSubjects(std::ifstream & fin)
{
	for (int i = 0; i < subjectsSize; i++)
		fin >> subjects[i];
}
void Subjects::outSubjects()
{
	for (int i = 0; i < subjectsSize; i++)
		std::cout << subjects[i];
}
void Subjects::outSubjects(std::ofstream & fout)
{
	for (int i = 0; i < subjectsSize; i++)
		fout << subjects[i];
}
#pragma endregion
#pragma region Specialities

Specialities::Specialities()
{
}

Specialities::Specialities(const int size)
{
	this->specialitiesSize = size;
	specialities = new Speciality[specialitiesSize];
}

Specialities::~Specialities()
{
	delete[] specialities;
}

void Specialities::showSpecialities()
{
	for (int i = 0; i < specialitiesSize; i++)
		specialities[i].show();
}

Speciality & Specialities::operator[](const int number) const
{
	return specialities[number];
}

void Specialities::setSpecialities()
{
	for (int i = 0; i < specialitiesSize; i++)
		std::cin >> specialities[i];
}

void Specialities::setSpecialities(std::ifstream & fin)
{
	for (int i = 0; i < specialitiesSize; i++)
		fin >> specialities[i];
}

void Specialities::outSpecialities()
{
	for (int i = 0; i < specialitiesSize; i++)
		std::cout << specialities[i];
}

void Specialities::outSpecialities(std::ofstream & fout)
{
	for (int i = 0; i < specialitiesSize; i++)
		fout << specialities[i];
}

void Specialities::sortSpecialities()
{
	for (int i = 0; i < specialitiesSize - 1; i++) // функция сортировки по алфавиту(пузырьковый метод)
	{
		for (int j = 0; j < specialitiesSize - i - 1; j++)
		{
			if (specialities[j].get().compare(specialities[j + 1].get()) > 0) // compare - сравнивает лексикографически строки
				std::swap(specialities[j], specialities[j + 1]);
		}
	}
}

int Specialities::getSpecialitiesSize()
{
	return specialitiesSize;
}
#pragma endregion