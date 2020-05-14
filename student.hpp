#pragma once
#include "stuff.hpp"
#pragma region Student
class Student{
private:
    std::string studentName;
    std::string studentSurname;
    Group studentGroup;
    Speciality studentSpeciality;
    Subjects subjects;
    Audiences audiences;
public:
	// �����������
    Student();
	// ����������
    ~Student();
	// ���������� �� ������� ������ ��������.
    void show() const;
	// ������� � ���� ��� ������ ��������.
    void show(const std::string filename) const;
	void sortSubjects();
	//����� ������ �� �������
    void set();
	// ����� ������ �� �����.
    void set(const std::string filename);
	// ������� ��� ��������� ����� � �������/ �����.
    void setName();
    void setName(const std::string filename);
    void setSurname();
    void setSurname(const std::string filename);
    void setGroup();
    void setGroup(const std::string filename);
    void setSpeciality();
    void setSpeciality(const std::string filename);
    void setSubjects();
    void setSubjects(const std::string filename);
    void setAudiences();
    void setAudiences(const std::string filename);
};
#pragma endregion
#pragma region Students
class Students {
private:
    Student *students = nullptr;
    int studentsSize;
public:
	// �����������
    Students();
	// ����������� � ����������, �������� - ������ ������� ��������. � ������������ ���������� ������ � � ������� ����������� ������.
    Students(const int size);
	// ����������
    ~Students();
	// ������� ���������� � ��������� �� �������
    void showStudents();
	// ������������� �������� [].
	// ������� ������: ������ ��������
	// �������� ������: ������ ���� Student.
    Student& operator [] (const int number) const;
	// ������ ��������� �� �������
    void setStudents();
	// ������ ��������� �� �����
    void setStudents(const std::string filename);
	// ����� ��������� �� �������.
    void outStudents() const;
	// ����� ��������� � ����
    void outStudents(const std::string filename) const;
	// ���������� ���������, ������� ��������� �������� ������� ����������� ���������� � �������������� ������� compare.
    void sortStudentsSubjects();
	// ���������� ������ �������
    int getStudentsSize() const;
	// ������������� ������ �������
    void setStudentsSize();
};
#pragma endregion