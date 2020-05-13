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
    void showName() const;
    void showSurname() const;
    void showGroup() const;
    void showSpeciality() const;
    void showSubjects() const;
    void showAudiences() const;

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
