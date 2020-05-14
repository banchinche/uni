#include "stuff.hpp"
#pragma region Group,Audience,Subject,Speciality
#pragma region Group
Group::Group()
{
    this->groupName = "defaultGroup";
}

Group::~Group()
{
}

void Group::show() const
{
    std::cout << "Group name is " << groupName << std::endl;
}

std::string Group::get() const
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

void Audience::show() const
{
    std::cout << "Audience number is " << audienceNumber << std::endl;
}

uint64 Audience::get()const
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

void Subject::show()const
{
    std::cout << "Subject's name is " << subjectName << std::endl;
}
std::string Subject::get()const
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

void Speciality::show()const
{
    std::cout << "Specialities name is " << specialityName << std::endl;
}

std::string Speciality::get()const
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
#pragma endregion
#pragma region Groups,Audiences,Subjects,Specialities
#pragma region Groups
Groups::Groups()
{
}
Groups::~Groups()
{
    delete[] groups;
}

void Groups::showGroups()const
{
    for (int i = 0; i < groupsSize; i++)
        groups[i].show();
	std::cout << std::endl;
}

Group & Groups::operator[](int number) const
{
    return groups[number];
}
int Groups::getGroupsSize() const
{
    return groupsSize;
}
void Groups::setGroups()
{
	std::cout << "Enter quantity of groups" << std::endl;
	std::cin >> groupsSize;
	std::cin.ignore();
	groups = new Group[groupsSize];
    for (int i = 0; i < groupsSize; i++)
        std::cin >> groups[i];
}
void Groups::setGroups(std::ifstream & fin)
{
	fin >> groupsSize;
	fin.ignore();
	groups = new Group[groupsSize];
    for (int i = 0; i < groupsSize; i++)
        fin >> groups[i];
}
void Groups::outGroups(std::ofstream & fout) const
{
	fout << groupsSize << std::endl;
    for (int i = 0; i < groupsSize; i++)
        fout << groups[i];
	fout << std::endl;
}
#pragma endregion
#pragma region Audiences
Audiences::Audiences()
{
}
Audiences::~Audiences()
{
	delete[] audiences;
}

void Audiences::showAudiences()const
{
    for (int i = 0; i < audiencesSize; i++)
        audiences[i].show();
	std::cout << std::endl;
}

Audience & Audiences::operator[](const int number) const
{
    return audiences[number];
}

int Audiences::getAudiencesSize() const
{
    return audiencesSize;
}
void Audiences::setAudiences()
{
	std::cout << "Enter quantity of audiences" << std::endl;
	std::cin >> audiencesSize;
	std::cin.ignore();
	audiences = new Audience[audiencesSize];
    for (int i = 0; i < audiencesSize; i++)
        std::cin >> audiences[i];
}
void Audiences::setAudiences(std::ifstream & fin)
{
	fin >> audiencesSize;
	fin.ignore();
	audiences = new Audience[audiencesSize];
    for (int i = 0; i < audiencesSize; i++)
        fin >> audiences[i];
}
void Audiences::outAudiences(std::ofstream & fout) const
{
	fout << audiencesSize << std::endl;
    for (int i = 0; i < audiencesSize; i++)
        fout << audiences[i];
	fout << std::endl;
}
#pragma endregion
#pragma region Subjects

Subjects::Subjects()
{
}

Subjects::~Subjects()
{
    delete[] subjects;
}

void Subjects::showSubjects()const
{
    for (int i = 0; i < subjectsSize; i++)
        subjects[i].show();
	std::cout << std::endl;
}

Subject & Subjects::operator[](const int number) const
{
    return subjects[number];
}

void Subjects::sortSubjects()
{
    for (int i = 0; i < subjectsSize - 1; i++) 
    {
        for (int j = 0; j < subjectsSize - i - 1; j++)
        {
            if (subjects[j].get().compare(subjects[j + 1].get()) > 0) 
                std::swap(subjects[j], subjects[j + 1]);
        }
    }
}

int Subjects::getSubjectsSize() const
{
    return subjectsSize;
}
void Subjects::setSubjects()
{
	std::cout << "Enter quantity of subjects" << std::endl;
	std::cin >> subjectsSize;
	std::cin.ignore();
	subjects = new Subject[subjectsSize];
    for (int i = 0; i < subjectsSize; i++)
        std::cin >> subjects[i];
}
void Subjects::setSubjects(std::ifstream & fin)
{
	fin >> subjectsSize;
	fin.ignore();
	subjects = new Subject[subjectsSize];
    for (int i = 0; i < subjectsSize; i++)
        fin >> subjects[i];
}
void Subjects::outSubjects(std::ofstream & fout) const
{
	fout << subjectsSize << std::endl;
    for (int i = 0; i < subjectsSize; i++)
        fout << subjects[i];
	fout << std::endl;
}
#pragma endregion
#pragma region Specialities

Specialities::Specialities()
{
}
Specialities::~Specialities()
{
    delete[] specialities;
}

void Specialities::showSpecialities()const
{
    for (int i = 0; i < specialitiesSize; i++)
        specialities[i].show();
	std::cout << std::endl;
}

Speciality & Specialities::operator[](const int number) const
{
    return specialities[number];
}

void Specialities::setSpecialities()
{
	std::cout << "Enter quantity of specialities" << std::endl;
	std::cin >> specialitiesSize;
	std::cin.ignore();
	specialities = new Speciality[specialitiesSize];
    for (int i = 0; i < specialitiesSize; i++)
        std::cin >> specialities[i];
}

void Specialities::setSpecialities(std::ifstream & fin)
{
	fin >> specialitiesSize;
	fin.ignore();
	specialities = new Speciality[specialitiesSize];
    for (int i = 0; i < specialitiesSize; i++)
        fin >> specialities[i];
}
void Specialities::outSpecialities(std::ofstream & fout) const
{
	fout << specialitiesSize << std::endl;
    for (int i = 0; i < specialitiesSize; i++)
        fout << specialities[i];
	fout << std::endl;
}

void Specialities::sortSpecialities()
{
    for (int i = 0; i < specialitiesSize - 1; i++) 
    {
        for (int j = 0; j < specialitiesSize - i - 1; j++)
        {
            if (specialities[j].get().compare(specialities[j + 1].get()) > 0) 
                std::swap(specialities[j], specialities[j + 1]);
        }
    }
}

int Specialities::getSpecialitiesSize() const
{
    return specialitiesSize;
}
#pragma endregion
#pragma endregion