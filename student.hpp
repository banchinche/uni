#pragma once
#include "stuff.hpp"
class Student{
private:
    std::string studentName;
    std::string studentSurname;
    Group studentGroup;
    Speciality studentSpeciality;
    Subjects subjects;
    Audiences audiences;
public:
    Student();
    ~Student();
    void show() const;
    void show(std::string filename) const;
    void showName() const;
    void showSurname() const;
    void showGroup() const;
    void showSpeciality() const;
    void showSubjects() const;
    void showAudiences() const;
	void sortSubjects();
    void set();
    void set(std::string filename);
    void setName();
    void setName(std::string filename);
    void setSurname();
    void setSurname(std::string filename);
    void setGroup();
    void setGroup(std::string filename);
    void setSpeciality();
    void setSpeciality(std::string filename);
    void setSubjects();
    void setSubjects(std::string filename);
    void setAudiences();
    void setAudiences(std::string filename);


};

class Students {
private:
    Student *students = nullptr;
    int studentsSize;
public:
    Students();
    Students(const int size);
    ~Students();
    void showStudents();
    Student& operator [] (const int number) const;
    void setStudents();
    void setStudents(std::string filename);
    void outStudents() const;
    void outStudents(std::string filename) const;
    void sortStudentsSubjects();
    int getStudentsSize() const;
    void setStudentsSize();
};
