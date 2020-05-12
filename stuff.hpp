#pragma once
#include <iostream>
#include <string>

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
    void show();
    void get();
    void set();
    void read();
    void write();
};
class Audience{
private:
    uint64 audienceNumber;
public:
    void show();
    void get();
    void set();
    void read();
    void write();
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
private:

};
