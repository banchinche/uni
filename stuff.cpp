#include "stuff.hpp"
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

std::ostream & operator<<(std::ostream & out, const Groups & groups)
{
	out << "Group list:" << std::endl;
	for (int i = 0; i < groups.groupsSize; i++)
		out << groups[i] << std::endl;
	return out;
}

std::istream & operator >> (std::istream & in, Groups & groups)
{
	for (int i = 0; i < groups.groupsSize; i++)
	{
		in >> groups[i];
	}
	return in;
}

std::ofstream & operator<<(std::ofstream & fout1, const Groups & groups)
{
	for (int i = 0; i < groups.groupsSize; i++)
		fout1 << groups[i];
	return fout1;
}

std::ifstream & operator >> (std::ifstream & fin, Groups & groups)
{
	for (int i = 0; i < groups.groupsSize; i++)
		fin >> groups[i];
	return fin;
}
int Groups::getGroupsSize()
{
	return groupsSize;
}
#pragma endregion*/
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
	std::cout << "Enter group name" << std::endl;
	in >> group.groupName;
	return in;
}

std::ofstream & operator<<(std::ofstream & fout2, const Group & group)
{
	fout2 << group.groupName << std::endl;
	return fout2;
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

std::ofstream & operator<<(std::ofstream & fou, const Audience & audience)
{
	fou << audience.audienceNumber << std::endl;
	return fou;
}

#pragma endregion


/*Audiences::Audiences()
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
}*/
