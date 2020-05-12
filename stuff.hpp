#pragma once
#include <iostream>
#include <string>
#include <fstream>
typedef unsigned int uint64;
struct Date{
    uint64 day;
    uint64 month;
    uint64 year;
};

class Group{
private:
    std::string groupName;
public:
	Group();
	~Group();
    void show();
    std::string get();
	friend std::ostream & operator<<(std::ostream & out, const Group & group);
	friend std::istream & operator >> (std::istream & in, Group & group);
	friend std::ofstream & operator <<(std::ofstream & fout2, const Group & group);
	friend std::ifstream & operator >> (std::ifstream & fin, Group & group);
};

class Audience{
private:
    uint64 audienceNumber;
public:
	Audience(); // попрописывать какие методы константные 
	~Audience();
	void show();
	uint64 get();
	friend std::ostream & operator<<(std::ostream & out, const Audience & audience);
	friend std::istream & operator >> (std::istream & in, Audience & audience);
	friend std::ofstream & operator <<(std::ofstream & fou, const Audience & audience);
	friend std::ifstream & operator >> (std::ifstream & fin, Audience & audience);
};
class Subject{
private:
    std::string subjectName;
public:
    void show();
    void get();
    void set();
    void read();
    void write();
};
class Speciality{
private:
    std::string specialityName;
public:
    void show();
    void get();
    void set();
    void read();
    void write();
};





// array classes

class Groups{
public:
	Groups();
	Groups(const int size);
	~Groups();
	void showGroups();
	Group& operator [] (const int number) const;
	void sortGroups();
	int getGroupsSize();
	friend std::ostream & operator<<(std::ostream & out, const Groups & groups);
	friend std::istream & operator >> (std::istream & in, Groups & groups);
	friend std::ofstream & operator<<(std::ofstream & fout1, const Groups & groups);
	friend std::ifstream & operator >> (std::ifstream & fin, Groups & groups);
private:
	Group *groups;
	int groupsSize;
};
/*class Audiences {
public:
	Audiences();
	Audiences(const int size);
	~Audiences();
	void showAudiences();
	Audience& operator [] (const int number) const;
	int getAudiencesSize();
	friend std::ostream & operator<<(std::ostream & out, const Audiences & groups);
	friend std::istream & operator >> (std::istream & in, Audiences & groups);
	friend std::ofstream & operator<<(std::ofstream & fout, const Audiences & groups);
	friend std::ifstream & operator >> (std::ifstream & fin, Audiences & groups);
private:
	Audience *audiences;
	int audiencesSize;
};*/