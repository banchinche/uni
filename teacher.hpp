#pragma once
#include "stuff.hpp"
#include <iostream>
class Teacher{
private:
    std::string teacherName;
    std::string teacherPatronymic;
    std::string teacherSurname;
    Subject teacherSubject;
    Specialities specialities;
    Audiences audiences;
    Groups groups;
public:
    Teacher();
    ~Teacher();
    void show() const;
    void showName() const;
    void showPatronymic() const;
    void showSurname() const;
    void showSubject() const;
    void showSpecialities() const;
    void showAudiences() const;
    void showGroups() const;

    void set();
    void set(std::string filename);
    void setName();
    void setName(std::string filename);
    void setPatronymic();
    void setPatronymic(std::string filename);
    void setSurname();
    void setSurname(std::string filename);
    void setSubject();
    void setSubject(std::string filename);
    void setSpecialities();
    void setSpecialities(std::string filename);
    void setAudiences();
    void setAudiences(std::string filename);
    void setGroups();
    void setGroups(std::string filename);

};

